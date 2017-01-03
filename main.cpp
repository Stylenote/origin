#include <QApplication>
#include <QLabel>

int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    QLabel lbl("<h1>Hello world<h1>");

    lbl.show();

    return app.exec();
}
