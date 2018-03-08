import QtQuick 2.9
import QtTest 1.0

Item {
    width: 100
    height: 100

    MyButton{
        id: button1
    }

    TestCase {
        id: testCasae
        name: "MyButtonTest"
        when: windowShown
        property bool cklicked: false

        function nameTest() {
            verify( button1.name === "Button default Name", "fascher Default Name" )

            button1.name = "Button1"
            verify( button1.name === "Button1", "konte Namen nicht setzen" )
        }

        Connections{
            target: button1
            onMyClicked: testCasae.cklicked=true
        }

        function test_key_click() {
            // mouseClick( mainpage, 10 , 10 );
            mouseClick( button1, 50, 50 )
            verify(testCasae.cklicked===true, "Button nicht gecklicked");
        }
    }
}
