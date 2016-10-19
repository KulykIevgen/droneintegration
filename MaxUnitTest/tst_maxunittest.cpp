#include <QString>
#include <QtTest>
#include "../MaxApplication/maxfinder.h"

class MaxUnitTest : public QObject
{
    Q_OBJECT

public:
    MaxUnitTest();

private Q_SLOTS:
    void findMax();
    void findMax_data();
};

void MaxUnitTest::findMax_data()
{
    QTest::addColumn<int>("left");
    QTest::addColumn<int>("right");
    QTest::addColumn<int>("result");

    QTest::newRow("one") << 1 << 10 << 10;
    QTest::newRow("two") << 0 << -10 << 0;
    QTest::newRow("three") << 0 << 0 << 5;
}

MaxUnitTest::MaxUnitTest()
{
}

void MaxUnitTest::findMax()
{
    QFETCH(int,left);
    QFETCH(int,right);
    QFETCH(int,result);

    QCOMPARE(MaxFinder::findMax(left,right),result);

}

QTEST_APPLESS_MAIN(MaxUnitTest)

#include "tst_maxunittest.moc"
