import QtQuick 2.9
import "../js/utils.js" as Utils

Item {
    id: seat_left_area
    Image {
        id: seat_left
        x: -14
        y: 4
        width: 367
        height: 259
        source: Utils.getUrlImg("vip-right.png")
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: arrow_between_seat_left
        x: 77
        y: 33
        width: 125
        height: 125
        source: Utils.getUrlImg("Screenshot_5-removebg-preview.png")
        fillMode: Image.PreserveAspectFit
        opacity: 0.2
        MouseArea {
            anchors.fill: parent
            onClicked:
                {
                    if (arrow_between_seat_left.opacity === 0.2){
                        arrow_between_seat_left.opacity = 1;
                    }else
                    {
                        arrow_between_seat_left.opacity = 0.2;
                    }
                }
        }
    }

    Image {
        id: arrow_floor_seat_left
        x: 39
        y: 80
        width: 125
        height: 125
        source: Utils.getUrlImg("Screenshot_5-removebg-preview.png")
        rotation: 30
        fillMode: Image.PreserveAspectFit
        opacity: 0.2
        MouseArea {
            anchors.fill: parent
            onClicked:
                {
                    if (arrow_floor_seat_left.opacity === 0.2){
                        arrow_floor_seat_left.opacity = 1;
                    }else
                    {
                        arrow_floor_seat_left.opacity = 0.2;
                    }
            }
        }
    }

    Image {
        id: arrow_def_seat_left
        x: 39
        y: -12
        width: 125
        height: 125
        source: Utils.getUrlImg("Screenshot_5-removebg-preview.png")
        rotation: 330
        fillMode: Image.PreserveAspectFit
        opacity: 0.2
        MouseArea {
            anchors.fill: parent
            onClicked:
                {
                    if (arrow_def_seat_left.opacity === 0.2){
                        arrow_def_seat_left.opacity = 1;
                    }else
                    {
                        arrow_def_seat_left.opacity = 0.2;
                    }
            }
        }
    }
}
