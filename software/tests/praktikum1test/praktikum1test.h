#ifndef TEST_CASE_H
#define TEST_CASE_H

#include <QtTest/QtTest>
#include "vector.h"

///\li **Klasse:** TestCase
///\li **Komponente:** Vector
///\li **Status:** Implemented
///\li **Design Review:** T. Zimmermann
///\li **Implementation Review:** P. Siegel
///
/// \brief Vector-Klasse für git-Übungen
/// \remarks
///
/// \author Marcus Vetter
/// \version 01.00
/// \date 09.03.2018
class TestCase : public QObject
{
	Q_OBJECT

private slots:	
    ///
    /// \brief construktorTest
    ///
    void construktorTest(){		
        Vector v1;

        QCOMPARE( v1.getX(), 0.0 );
        QCOMPARE( v1.getY(), 0.0 );
        QCOMPARE( v1.getZ(), 0.0 );

        Vector v2(10,20,30);

        QCOMPARE( v2.getX(), 10.0 );
        QCOMPARE( v2.getY(), 20.0 );
        QCOMPARE( v2.getZ(), 30.0 );
	}

    ///
    /// \brief addTest
    ///
    void addTest(){
        Vector v1( 10, 20, 30 );
        Vector v2( 5, 6, 7 );

        v1.add( v2 );

        QCOMPARE( v1.getX(), 15.0 );
        QCOMPARE( v1.getY(), 26.0 );
        QCOMPARE( v1.getZ(), 37.0 );
    }

    ///
    /// \brief subTest
    ///
    void subTest(){
        Vector v1( 10, 20, 30 );
        Vector v2( 5, 6, 7 );

        v1.sub( v2 );

        QCOMPARE( v1.getX(), 5.0 );
        QCOMPARE( v1.getY(), 14.0 );
        QCOMPARE( v1.getZ(), 23.0 );
    }

    ///
    /// \brief dotTest
    ///
    void dotTest(){
        Vector v1( 2, 4, 3 );
        Vector v2( 1, 2, 3 );

        QCOMPARE( v1.dot( v2 ), 19 );
    }

    ///
    /// \brief crossTest
    ///
    void crossTest(){
        Vector v1( 1, 2, 3 );
        Vector v2( -7, 8, 9 );

        Vector v = v1.cross( v2 );

        QCOMPARE( v.getX(), -6 );
        QCOMPARE( v.getY(), -30 );
        QCOMPARE( v.getZ(), 22 );
    }

    ///
    /// \brief printTest
    ///
    void printTest()
    {
        Vector v1( 1, 2, 3 );
        v1.print();
    }
};

#endif
