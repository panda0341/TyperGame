#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

using namespace std;

QT_BEGIN_NAMESPACE

namespace Ui 
{
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lineEdit_returnPressed();
    void on_lineEdit_textChanged(const QString &arg1);
    QString getRandomWord();
    void scoreCount();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
