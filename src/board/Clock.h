/*
 * Copyright (C) 2021 Daniel Volk <mail@volkarts.com>
 *
 * This file is part of 6502emu - 6502 cycle accurate emulator gui.
 *
 * 6502emu is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * You should have received a copy of the GNU General Public License
 * along with 6502emu. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "WireState.h"
#include <QAtomicInt>
#include <QElapsedTimer>
#include <QObject>

class QTimer;

class Clock : public QObject
{
    Q_OBJECT

public:
    explicit Clock(QObject* parent = nullptr);
    ~Clock() override;

    uint64_t period() const { return period_; }

    bool isRunning() const;

    WireState state() const { return state_; }

public slots:
    void setPeriod(quint64 period);
    void start();
    void stop();
    void triggerEdge(StateEdge edge);

signals:
    void runningChanged();
    void clockCycleChanged();
    void statsUpdatedClockCycles(quint32 clockCycles);

private slots:
    void tick();
    void collectStats();

private:
    uint64_t period_;
    QElapsedTimer busyWaiter_;
    int busyWaitTimeout_;
    QTimer* timer_;
    WireState state_;
    QAtomicInt shouldStop_;

    QTimer* statsTimer_;
    uint32_t statsCycleCounter_;
};
