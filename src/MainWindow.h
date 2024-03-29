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

#include "views/ViewFactory.h"
#include <QMainWindow>

class Board;
class BoardFile;
class Device;
class View;
class UserState;
class QLabel;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Board* board, QWidget* parent = {});
    ~MainWindow() override;

    UserState* userState() const { return userState_.get(); }
    Board* board() const { return board_; }

    void destroyAllViews();

protected:
    void closeEvent(QCloseEvent* event) override;

private slots:
    void onCloseView();
    void onClockRunningChanged();
    void onBoardViewAction();
    void onBoardResetted();
    void onStatsUpdatedClockCycles(uint32_t clockCycles);
    void onActionManageBoardTriggered();
    void onActionNewBoardTriggered();
    void onActionOpenBoardTriggered();
    void onActionAboutTriggered();
    void onActionQuitTriggered();

private:
    void setup();
    void maybeLoadBoard();
    void loadWindowState();
    void saveWindowState();
    void saveViewsVisibleState();
    void createBoardMenu();
    void loadedBoardChanged();
    QAction* createDeviceViewAction(int index, Device* device, const ViewFactoryPointer& factory);
    void rebuildBoardMenuActions();
    void showEnabledViews();
    void showView(ViewFactory* factory);
    void hideView(ViewFactory* factory);
    void loadBoard(const QString& fileName);
    void reloadBoard();
    void saveBoard();
    void foreachView(const std::function<void(QAction*, ViewFactory*)>& callback);
    bool warnOpenBoard();
    void handleBoardLoadingFinished(bool result);
    void handleBoardSavingFinished(bool result);
    void loadingBoardFailed();

private:
    Ui::MainWindow* ui;
    QScopedPointer<UserState> userState_;
    Board* board_;
    QScopedPointer<BoardFile> boardFile_;
    QLabel* statusMessage_{};

    Q_DISABLE_COPY_MOVE(MainWindow)
};
