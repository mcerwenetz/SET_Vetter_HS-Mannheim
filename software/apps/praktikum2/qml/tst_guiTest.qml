import QtQuick 2.7
import QtTest 1.0

Main {
    id: root
    width: 100
    height: 100

    TestCase {
        id: testCasae
        name: "Application test"
        when: windowShown
        property bool cklicked: false

        function test_key_click() {
            // mouseClick( mainpage, 10 , 10 );
            mouseClick( root, 50, 50 )
            verify(root.counter>0, "Button nicht gecklicked");
        }
    }
}
