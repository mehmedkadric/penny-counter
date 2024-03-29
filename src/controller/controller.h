#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QImage>

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    void calculate(QString , int);
signals:
    void updateStatusLabel(QString);
    void updateImageLabel(QImage);

};

#endif // CONTROLLER_H
