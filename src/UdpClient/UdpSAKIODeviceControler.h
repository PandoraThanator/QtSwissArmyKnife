﻿/*******************************************************************************
* The file is encoding with utf-8 (with BOM)
*
* I write the comment with English, it's not because that I'm good at English,
* but for "installing B".
*
* Copyright (C) 2018-2018 wuhai persionnal. All rights reserved.
*******************************************************************************/
#ifndef UDPSAKIODEVICECONTROL_H
#define UDPSAKIODEVICECONTROL_H

#include "SAKIODeviceControler.h"

namespace Ui {
class UdpSAKIODeviceControler;
}

class UdpSAKIODeviceControler : public SAKIODeviceControler
{
    Q_OBJECT
public:
    UdpSAKIODeviceControler(QWidget *parent = Q_NULLPTR);
    ~UdpSAKIODeviceControler();

    virtual void afterDeviceOpen();
    virtual void afterDeviceClose();
public slots:
    virtual void open();
    virtual void refresh();
private:
    Ui::UdpSAKIODeviceControler *ui;
    ///---------------------------------------------------------
    void initUi();
};

#endif
