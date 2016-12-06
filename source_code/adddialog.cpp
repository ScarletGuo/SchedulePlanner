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

#include <QtWidgets>

//! [0]
AddDialog::AddDialog(QWidget *parent)
    : QDialog(parent)
{
    timeLabel = new QLabel("Time");
    IDLabel = new QLabel("ID");
    roomLabel = new QLabel("Room");
    modelLabel = new QLabel("Model");
    infoLabel = new QLabel("Personal Info");
    okButton = new QPushButton("OK");
    cancelButton = new QPushButton("Cancel");

    timeText = new QLineEdit;
    IDText = new QLineEdit;
    roomText = new QLineEdit;
    modelText = new QLineEdit;
    infoText = new QLineEdit;

    QGridLayout *gLayout = new QGridLayout;
    gLayout->addWidget(timeLabel, 0, 0);
    gLayout->addWidget(timeText, 0, 1);

    gLayout->addWidget(IDLabel, 1, 0, Qt::AlignLeft|Qt::AlignTop);
    gLayout->addWidget(IDText, 1, 1, Qt::AlignLeft);

    gLayout->addWidget(roomLabel, 2, 0);
    gLayout->addWidget(roomText, 2, 1);

    gLayout->addWidget(modelLabel, 3, 0);
    gLayout->addWidget(modelText, 3, 1);

    gLayout->addWidget(infoLabel, 4, 0);
    gLayout->addWidget(infoText, 4, 1);

    gLayout->addWidget(createBox(),5, 1);

    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(okButton);
    buttonLayout->addWidget(cancelButton);

    gLayout->addLayout(buttonLayout, 6, 1, Qt::AlignRight);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(gLayout);
    setLayout(mainLayout);

    connect(okButton, &QAbstractButton::clicked, this, &QDialog::accept);
    connect(cancelButton, &QAbstractButton::clicked, this, &QDialog::reject);

    setWindowTitle(tr("Add a Participant"));
}

QGroupBox *AddDialog::createBox()
{
    QGroupBox *groupBox = new QGroupBox();
    radio1 = new QRadioButton(tr("&MON"));
    radio2 = new QRadioButton(tr("&TUE"));
    radio3 = new QRadioButton(tr("&WED"));
    radio4 = new QRadioButton(tr("&THU"));
    radio5 = new QRadioButton(tr("&FRI"));

    radio1->setChecked(true);

    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addWidget(radio1);
    hbox->addWidget(radio2);
    hbox->addWidget(radio3);
    hbox->addWidget(radio4);
    hbox->addWidget(radio5);
    groupBox->setLayout(hbox);

    return groupBox;

}

//! [0]
