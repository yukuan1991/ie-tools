#ifndef TOOLS_H
#define TOOLS_H

#include <QWidget>

namespace Ui {
class Tools;
}

class Tools : public QWidget
{
    Q_OBJECT

public:
    explicit Tools(QWidget *parent = 0);
    ~Tools();

private slots:
    void on_flowProcessBtn_clicked();

    void on_processFlowBtn_clicked();

    void on_humanMachineBtn_clicked();

    void on_lineBalancingBtn_clicked();

    void on_SLPBtn_clicked();

    void on_VSMBtn_clicked();

    void on_FMEABtn_clicked();

    void on_MODBtn_clicked();

    void on_MOSTBtn_clicked();

    void on_MTMBtn_clicked();

    void on_VideoBtn_clicked();

private:
    Ui::Tools *ui;
};

#endif // TOOLS_H
