#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setFixedSize(300, 200);

    QPushButton *button = new QPushButton("Click Me", &window);
    button->setGeometry(100, 80, 100, 30);

    window.show();
    return app.exec();
}
