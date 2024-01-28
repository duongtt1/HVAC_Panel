import QtQuick 2.9
import QtQuick.Controls 2.5
import "../Common"

Rectangle {
    id: rectangle
    width: 1200
    height: 400

    color: "#EAEAEA"

    Rectangle {
        id: bg
        x: 0
        y: 0
        width: 1200
        height: 400
        color: "#f0f4f9"

        TempDisplay {
            id: tempDisLeft
            color: "#ffffff"
            height: 100
            radius: 35
            width: 350
            x: 23
            y: -49
            numTemp: 24
        }

        TempDisplay {
            id: tempDisRight
            color: "#ffffff"
            height: 100
            radius: 35
            width: 350
            x: 818
            y: -49
            numTemp: 24
        }

        BlowerItem {
            id: blower
            height: 134
            width: 409
            x: 386
            y: 8
        }

        SeatRightArea {
            id: seat_right_area
            height: 312
            width: 380
            x: 820
            y: 88
        }

        SeatLeftArea {
            id: seat_left_area
            height: 304
            width: 365
            x: 8
            y: 88
        }

        BtnCtrlArea {
            id: button_control
            height: 111
            width: 604
            x: 291
            y: 266
        }

        Item {
            id: btnCtrlArea2
            height: 130
            width: 318
            x: 425
            y: 160
            TextButton {
                id: offBtn
                x: 70
                y: 9
                width: 85
                height: 85
                anchors.verticalCenterOffset: 0
                anchors.horizontalCenterOffset: -48
                textDisplay: "OFF"
            }
            DrvOnlyButton {
                id: drvOnlyBtn
                x: 170
                y: 9
                width: 85
                height: 85
                anchors.verticalCenterOffset: 0
                anchors.horizontalCenterOffset: 53
                textDisplay: "Driver Only"
            }
        }
    }

}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.66}
}
##^##*/
