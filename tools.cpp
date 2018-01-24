#include "tools.h"
#include "ui_tools.h"
#include <QProcess>
#include <QDebug>

Tools::Tools(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tools)
{
    ui->setupUi(this);
    setWindowTitle("IE Tools");
}

Tools::~Tools()
{
    delete ui;
}

void Tools::on_flowProcessBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Flow Process Charting/flow-process.exe\"");
//    process.startDetached("flow-process.exe");
}

void Tools::on_processFlowBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Process Flowchart/process-flow.exe\"");
//    process.startDetached("process-flow.exe");
}

void Tools::on_humanMachineBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Human-Machine Operation Study/human-machine.exe\"");
//    process.startDetached("human-machine.exe");

}

void Tools::on_lineBalancingBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Line Balancing/LineBalancingR.exe\"");
//    process.startDetached("LineBalancingR.exe");

}

void Tools::on_SLPBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Systematic Layout Planning/SLP.exe\"");
//    process.startDetached("SLP.exe");

}

void Tools::on_VSMBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Value Stream Mapping/vsm.exe\"");
}

void Tools::on_FMEABtn_clicked()
{
    QProcess process;
    process.startDetached("./FMEA/fmea.exe");

}

void Tools::on_MODBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Work Study - MOD/mod.exe\"");
//    process.startDetached("mod.exe");

}

void Tools::on_MOSTBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Work Study - MOST/most.exe\"");
//    process.startDetached("most.exe");

}

void Tools::on_MTMBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Work Study - MTM/mtm.exe\"");
//    process.startDetached("mtm.exe");

}

void Tools::on_VideoBtn_clicked()
{
    QProcess process;
    process.startDetached("\"./Work Study - Video/video.exe\"");

}
