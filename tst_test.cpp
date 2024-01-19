#include <QtTest/QtTest>
#include "objects.h"

class Test : public QObject {
    Q_OBJECT

private slots:
    void testSedan() {
        Sedan sedan;
        QVERIFY(sedan.drive(100));
        QCOMPARE(sedan.getTotalDistance(), 100);
        QCOMPARE(sedan.getFuelLevel(), 42);
    }

    void testSuv() {
        Suv suv;
        QVERIFY(suv.drive(100));
        QCOMPARE(suv.getTotalDistance(), 100);
        QCOMPARE(suv.getFuelLevel(), 58);
    }

    void testBus() {
        Bus bus;
        QVERIFY(bus.drive(100));
        QCOMPARE(bus.getTotalDistance(), 100);
        QCOMPARE(bus.getFuelLevel(), 135);
    }

    void testBicycle() {
        Bicycle bicycle;
        QVERIFY(bicycle.drive(100));
    }

    void testRoute() {
        Route route;
        route.addPoint({0, 0, "Point A"});
        route.addPoint({10, 5, "Point B"});
        route.addPoint({20, 10, "Point C"});

        Sedan sedan;
        route.run(&sedan);
        QCOMPARE(sedan.getTotalDistance(), 22);
        QCOMPARE(sedan.getFuelLevel(), 50);
    }
};

QTEST_MAIN(Test)
#include "tst_test.moc"
