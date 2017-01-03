#include <QApplication>
#include <QLabel>

int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    QLabel lbl("<h1><i>Hello world</i><h1>");

    lbl.show();

    return app.exec();
}
