import QtQuick 2.7
import QtTest 1.0

Main {
    id: root
    width: 400
    height: 300

    TestCase {
        id: applicationTestCasae
        name: "Application test"
        when: windowShown
        property bool cklicked: false

        function test_key_click() {
            mouseClick( root, 250 , 100 );
            mouseClick( root, 230 , 100 );
            mouseClick( root, 200 , 100 );
            // mouseClick( root, 50, 50 )
            // verify(root.counter>0, "Button nicht gecklicked");
        }
    }
}
