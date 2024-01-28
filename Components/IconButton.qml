import QtQuick 2.9
import QtQuick.Controls 2.5
import QtQuick.Shapes 1.12
import QtCharts 2.3
import QtQuick.Templates 2.15
import QtQuick.Layouts 1.3

Item {
    id: container
    width: 85
    height: 85
    anchors.centerIn: parent

    property bool isPressed: false
    property string urlIcon: ""

    Button {
        id: roundButton
        width: container.width
        height: container.height
        background: Rectangle {
            color:  "white" // isPressed ? "#dcdcdc" : "white"
            radius: width / 10
            border.color: "#CCCCCC"
            border.width: 1

            Image {
                anchors.centerIn: parent
                source: urlIcon === "" ? "images/recyle.png" : urlIcon
                width: parent.width * 0.75 // Adjust the width of the icon
                height: parent.height * 0.75 // Adjust the height of the icon
            }

            Rectangle {
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
                width:   parent.width * 0.35
                height: parent.height * 0.04
                color: isPressed ? "#eb9534" : "#c9c8c5"
                anchors.topMargin: parent.height * 0.12
                radius: parent.width / 10
            }
        }
        onClicked: {
            isPressed = !isPressed;
        }
    }
}
