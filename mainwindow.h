#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSlider>
#include "secondwindow.h"


class MainWindow : public QMainWindow
{

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void buttonpressed();
    void buttonclose();
private:
    QLabel* blank;
    QLabel* challenge_level;
    QSlider* challenge;
    QPushButton* start;
    QPushButton* leave;
    QGridLayout* mainscreen;
    QVBoxLayout* layout;
    QHBoxLayout* buttons;
    SecondWindow w2;
};
#endif // MAINWINDOW_H
