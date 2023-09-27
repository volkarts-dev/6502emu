/*
 * Copyright (C) 2023 Daniel Volk <mail@volkarts.com>
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

#include "BoardExecutor.h"

#include "board/Board.h"
#include <QThread>

BoardExecutor::BoardExecutor(Board* board, QObject* parent) :
    QObject{parent},
    board_{board},
    boardThread_{new QThread{this}}
{
    board->moveToThread(boardThread_);

    boardThread_->start();
}

BoardExecutor::~BoardExecutor()
{
    connect(board_, &QObject::destroyed, boardThread_, &QThread::quit);

    board_->deleteLater();
    boardThread_->wait();
}