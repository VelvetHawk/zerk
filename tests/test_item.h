#ifndef TEST_ITEM_H
#define TEST_ITEM_H

#include <QString>
#include <QtTest/QtTest>
#include "item.h"

using std::QString;

class Test_Item: public QObject
{
	Q_OBJECT
	private slots:
		void test_name();
		void test_description();
		void test_item();
};

#endif // TEST_ITEM_H
