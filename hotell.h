#ifndef HOTELL_H
#define HOTELL_H

#include <QMainWindow>
#include <QWidget>
#include <tuple>


QT_BEGIN_NAMESPACE
namespace Ui {
class Hotell;
}
QT_END_NAMESPACE

class Hotell : public QMainWindow
{
    Q_OBJECT

public:
    Hotell(QWidget *parent = nullptr);
    ~Hotell();
    std::tuple<QString, QDate, QDate> handleRegistration();
    void clearInputs();
    QString handleRemoval();

private slots:

    void on_savePushButton_clicked();

    void on_removePushButton_clicked();

private:
    Ui::Hotell *ui;
};
#endif // HOTELL_H
