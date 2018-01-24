#include <QApplication>
#include "verification.h"
#include "tools.h"
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!verification_process())
    {
        return -1;
    }

    Tools t;
    t.show();

    QTimer timer;
    timer.setInterval (1000);
    timer.setSingleShot (true);
    QObject::connect (&timer, &QTimer::timeout, [&] { check_date (); timer.start (); });
    timer.start ();

    return a.exec();
}
