import QtQuick 2.7
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
        property bool active: false

        function nameTest() {
            verify( button1.name === "default Name", "fascher Default Name" )

            button1.name = "Button 1"
            verify( button1.name === "Button 1", "konte Namen nicht setzen" )
        }

        function defaultStateTest() {
            verify( button1.state === "off", "falscher default State" )
        }

        Connections{
            target: button1
            onClicked: {
                testCasae.active = active
                testCasae.cklicked = true
            }
        }

        function test_key_click() {

            mouseClick( button1, 25, 25 )
            wait( 100 );
            verify( testCasae.cklicked === true, "Button nicht gecklicked");
            verify( testCasae.active === true, "falscher Button State");
            verify( button1.state === "on", "falscher Button State");

            testCasae.cklicked = false

            mouseClick( button1, 25, 25 )
            wait( 100 );
            verify( testCasae.cklicked === true, "Button nicht gecklicked 2 ");
            verify( testCasae.active === false, "falscher Button State");
            verify( button1.state === "off", "falscher Button State");
        }

        function stateTest()
        {
            button1.state = "off"
            verify( button1.color === "blue", "falsche Farbe im state off");
            verify( button1.scale === 1.0, "falscher scale im state off");

            button1.state = "on"
            verify( button1.color === "red", "falsche Farbe im state on" );
            verify( button1.scale === 0.9, "falscher scale im state on");

            button1.state = "disabled"
            verify( button1.color === "gray", "falsche Farbe im state disabled" );
            verify( button1.scale === 1.0, "falscher scale im state disabled");
        }
    }
}
