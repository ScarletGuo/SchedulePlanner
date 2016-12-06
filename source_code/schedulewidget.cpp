/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "adddialog.h"
#include "schedulewidget.h"

#include <QtWidgets>

//! [0]
ScheduleWidget::ScheduleWidget(QWidget *parent)
    : QTabWidget(parent)
{
    table = new TableModel(this);
    newScheduleTab = new NewScheduleTab(this);
    connect(newScheduleTab, &NewScheduleTab::sendDetails,
        this, &ScheduleWidget::addEntry);

    addTab(newScheduleTab, "Schedule Planner");


    setupTabs();
}
//! [0]

//! [2]
void ScheduleWidget::showAddEntryDialog()
{
    AddDialog aDialog;

    if (aDialog.exec()) {
        QString time = aDialog.timeText->text();
        QString ID = aDialog.IDText->text();
        QString room = aDialog.roomText->text();
        QString model = aDialog.modelText->text();
        QString info = aDialog.infoText->text();
        QString weekday;
        if (aDialog.radio1->isChecked())
            weekday = "MON";
        else if (aDialog.radio2->isChecked())
                weekday = "TUE";
        else if (aDialog.radio3->isChecked())
                weekday = "WED";
        else if (aDialog.radio4->isChecked())
                weekday = "THU";
        else if (aDialog.radio5->isChecked())
                weekday = "FRI";

        addEntry(time, ID, room, model, info, weekday);
    }
}
//! [2]

//! [3]
void ScheduleWidget::addEntry(QString time, QString ID, QString room,
                             QString model, QString info, QString weekday)
{
    QList<QList<QString>> list = table->getList();
    QList<QString> pair;
    pair << time << ID << room << model << info << weekday;

        table->insertRows(0, 1, QModelIndex());

        QModelIndex index = table->index(0, 0, QModelIndex());
        table->setData(index, time, Qt::EditRole);
        index = table->index(0, 1, QModelIndex());
        table->setData(index, ID, Qt::EditRole);
        index = table->index(0, 2, QModelIndex());
        table->setData(index, room, Qt::EditRole);
        index = table->index(0, 3, QModelIndex());
        table->setData(index, model, Qt::EditRole);
        index = table->index(0, 4, QModelIndex());
        table->setData(index, info, Qt::EditRole);
        index = table->index(0, 5, QModelIndex());
        table->setData(index, weekday, Qt::EditRole);
        removeTab(indexOf(newScheduleTab));
}
//! [3]

//! [4a]
void ScheduleWidget::editEntry()
{
    QTableView *temp = static_cast<QTableView*>(currentWidget());
    QSortFilterProxyModel *proxy = static_cast<QSortFilterProxyModel*>(temp->model());
    QItemSelectionModel *selectionModel = temp->selectionModel();

    QModelIndexList indexes = selectionModel->selectedRows();
    QString time;
    QString ID;
    QString room;
    QString model;
    QString info;
    QString weekday;
    int row = -1;

    foreach (QModelIndex index, indexes) {
        row = proxy->mapToSource(index).row();
        QModelIndex timeIndex = table->index(row, 0, QModelIndex());
        QVariant varTime = table->data(timeIndex, Qt::DisplayRole);
        time = varTime.toString();

        QModelIndex IDIndex = table->index(row, 1, QModelIndex());
        QVariant varID = table->data(IDIndex, Qt::DisplayRole);
        ID = varID.toString();

        QModelIndex roomIndex = table->index(row, 2, QModelIndex());
        QVariant varRoom = table->data(roomIndex, Qt::DisplayRole);
        room = varRoom.toString();

        QModelIndex modelIndex = table->index(row, 3, QModelIndex());
        QVariant varModel = table->data(modelIndex, Qt::DisplayRole);
        model = varModel.toString();

        QModelIndex infoIndex = table->index(row, 4, QModelIndex());
        QVariant varInfo = table->data(infoIndex, Qt::DisplayRole);
        info = varInfo.toString();

        QModelIndex weekdayIndex = table->index(row, 5, QModelIndex());
        QVariant varWeekday = table->data(weekdayIndex, Qt::DisplayRole);
        weekday = varWeekday.toString();
    }
//! [4a]

//! [4b]
    AddDialog aDialog;
    aDialog.setWindowTitle(tr("Edit a Participant"));
    aDialog.timeText->setText(time);
    aDialog.IDText->setText(ID);
    aDialog.roomText->setText(room);
    aDialog.modelText->setText(model);
    aDialog.infoText->setText(info);
    if (weekday == "MON")
        aDialog.radio1->setChecked(true);
    else if (weekday == "TUE")
        aDialog.radio2->setChecked(true);
    else if (weekday == "WED")
        aDialog.radio3->setChecked(true);
    else if (weekday == "THU")
        aDialog.radio4->setChecked(true);
    else if (weekday == "FRI")
        aDialog.radio5->setChecked(true);

    if (aDialog.exec()) {
        QString newSchedule = aDialog.IDText->text();
        if (newSchedule != ID) {
            QModelIndex index = table->index(row, 1, QModelIndex());
            table->setData(index, newSchedule, Qt::EditRole);
        }
    }
}
//! [4b]

//! [5]
void ScheduleWidget::removeEntry()
{
    QTableView *temp = static_cast<QTableView*>(currentWidget());
    QSortFilterProxyModel *proxy = static_cast<QSortFilterProxyModel*>(temp->model());
    QItemSelectionModel *selectionModel = temp->selectionModel();

    QModelIndexList indexes = selectionModel->selectedRows();

    foreach (QModelIndex index, indexes) {
        int row = proxy->mapToSource(index).row();
        table->removeRows(row, 1, QModelIndex());
    }

    if (table->rowCount(QModelIndex()) == 0) {
        insertTab(0, newScheduleTab, "Schedule Planner");
    }
}
//! [5]

//! [1]
void ScheduleWidget::setupTabs()
{
    QStringList groups;
    groups << "MON" << "TUE" << "WED" << "THU" << "FRI";

    for (int i = 0; i < groups.size(); ++i) {
        QString str = groups.at(i);
        QString regExp = QString("^[%1].*").arg(str);

        proxyModel = new QSortFilterProxyModel(this);
        proxyModel->setSourceModel(table);
        proxyModel->setFilterRegExp(QRegExp(regExp, Qt::CaseInsensitive));
        proxyModel->setFilterKeyColumn(5);

        QTableView *tableView = new QTableView;
        tableView->setModel(proxyModel);

        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->resizeSection(0,150);
        tableView->verticalHeader()->hide();
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);

        tableView->setSortingEnabled(true);

        connect(tableView->selectionModel(),
            &QItemSelectionModel::selectionChanged,
            this, &ScheduleWidget::selectionChanged);

        addTab(tableView, str);
    }
}
//! [1]

//! [7]
void ScheduleWidget::readFromFile(const QString &fileName)
{
    QFile file(fileName);

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(this, tr("Unable to open file"),
            file.errorString());
        return;
    }

    QList< QList< QString > >
            pairs = table->getList();
    QDataStream in(&file);
    in >> pairs;

    if (pairs.isEmpty()) {
        QMessageBox::information(this, tr("No participants in file"),
                                 tr("The file you are attempting to open contains no participants."));
    } else {
        for (int i=0; i<pairs.size(); ++i) {
            QList< QString > p = pairs.at(i);
            addEntry(p.at(0), p.at(1), p.at(2), p.at(3), p.at(4), p.at(5));
        }
    }
}
//! [7]

//! [6]
void ScheduleWidget::writeToFile(const QString &fileName)
{
    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("Unable to open file"), file.errorString());
        return;
    }

    QList< QList< QString > >
            pairs = table->getList();
    QDataStream out(&file);
        out << pairs;
}
//! [6]


