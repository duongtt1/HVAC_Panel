import QtQuick 2.9
import "../js/utils.js" as Utils

Item {
    id: seat_right_area
    Image {
        id: seat_right
        x: -4
        y: 11
        width: 367
        height: 259
        source: Utils.getUrlImg("vip-left.png")
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: arrow_def_seat_right
        x: 174
        y: -7
        width: 125
        height: 125
        source: Utils.getUrlImg("Screenshot_5-removebg-preview.png")
        rotation: -151.318
        fillMode: Image.PreserveAspectFit
        opacity: 0.2
        MouseArea {
            anchors.fill: parent
            onClicked:
                {
                    if (arrow_def_seat_right.opacity === 0.2){
                        arrow_def_seat_right.opacity = 1;
                    }else
                    {
                        arrow_def_seat_right.opacity = 0.2;
                    }
            }
        }
    }

    Image {
        id: arrow_between_seat_right
        x: 145
        y: 40
        width: 125
        height: 125
        source: Utils.getUrlImg("Screenshot_5-removebg-preview.png")
        rotation: -180
        fillMode: Image.PreserveAspectFit
        opacity: 0.2
        MouseArea {
            anchors.fill: parent
            onClicked: {
                if (arrow_between_seat_right.opacity === 0.2){
                    arrow_between_seat_right.opacity = 1;
                }else
                {
                    arrow_between_seat_right.opacity = 0.2;
                }
            }
        }
    }

    Image {
        id: arrow_floor_seat_2
        x: 179
        y: 85
        width: 125
        height: 125
        source: Utils.getUrlImg("Screenshot_5-removebg-preview.png")
        rotation: -200
        fillMode: Image.PreserveAspectFit
        opacity: 0.2
        MouseArea {
            anchors.fill: parent
            onClicked: {
                if (arrow_floor_seat_2.opacity === 0.2){
                    arrow_floor_seat_2.opacity = 1;
                }else
                {
                    arrow_floor_seat_2.opacity = 0.2;
                }
            }
        }
    }
}
