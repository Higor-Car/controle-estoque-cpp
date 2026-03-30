#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_mais_clicked();

    void on_menos_clicked();

    void on_vezes_clicked();

    void on_dividido_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
