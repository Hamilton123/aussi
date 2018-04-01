#define BGX 0.35
#define BGY 0.2
#define BGW 0.46

class pInteraction_Menu {
    idd = 37400;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscTitleBackground: life_RscText {
            colorBackground[] = {0,0,0,0.85};
            idc = -1;
            x = BGX;
            y = BGY;
            w = BGW;
            h = (1 / 25);
        };

        class MainBackground: life_RscText {
            idc = -1;
            colorBackground[] = {0,0,0,0.85};
            x = BGX;
            y = BGY + (11 / 250);
            w = BGW;
            h = 0.6 - (22 / 250) + 0.05;
        };

        class Title: life_RscTitle    {
            colorBackground[] = {0,0,0,0};
            idc = 37401;
            text = "$STR_pInAct_Title";
            x = BGX;
            y = BGY;
            w = BGW;
            h = (1 / 25);
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };
    };

    class controls {
        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = BGX;
            y = BGY + 0.07;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonOne: Life_RscButtonMenu {
            idc = 37450;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.11;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonTwo: Life_RscButtonMenu {
            idc = 37451;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.15;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonThree: Life_RscButtonMenu {
            idc = 37452;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.19;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonFour: Life_RscButtonMenu {
            idc = 37453;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.23;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonFive: Life_RscButtonMenu {
            idc = 37454;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.27;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonSix: Life_RscButtonMenu {
            idc = 37455;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.31;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };
        class ButtonSeven: Life_RscButtonMenu {
          idc = 37456;
          colorBackground[] = {0,0,0,0.9};
          text = "";
          sizeEx = 0.025;
          x = BGX;
          y = BGY + 0.35;
          w = BGW;
          h = 0.038;
          class Attributes {
              font = "PuristaMedium";
              align = "center";
          };
		};

        class ButtonEight: Life_RscButtonMenu {
            idc = 37457;
            colorBackground[] = {"( 0,0,0,0.85 )"};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.39;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };
    };
};

class vInteraction_Menu {
    idd = 37400;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscTitleBackground: life_RscText {
            colorBackground[] = {0,0,0,0.85};
            idc = -1;
            x = BGX;
            y = BGY;
            w = BGW;
            h = (1 / 25);
        };

        class MainBackground: life_RscText {
            idc = -1;
            colorBackground[] = {0,0,0,0.85};
            x = BGX;
            y = BGY + (11 / 250);
            w = BGW;
            h = 0.6 - (22 / 250);
        };

        class Title: life_RscTitle {
            colorBackground[] = {0,0,0,0};
            idc = 37401;
            text = "$STR_vInAct_Title";
            x = BGX;
            y = BGY;
            w = BGW;
            h = (1 / 25);
        };
    };

    class controls {
        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = BGX;
            y = BGY + 0.07;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonOne: Life_RscButtonMenu {
            idc = 37450;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.11;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonTwo: Life_RscButtonMenu {
            idc = 37451;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.15;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonThree: Life_RscButtonMenu {
            idc = 37452;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.19;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonFour: Life_RscButtonMenu {
            idc = 37453;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.23;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonFive: Life_RscButtonMenu {
            idc = 37454;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.27;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };

        class ButtonSix: Life_RscButtonMenu {
            idc = 37455;
            colorBackground[] = {0,0,0,0.9};
            text = "";
            sizeEx = 0.025;
            x = BGX;
            y = BGY + 0.31;
            w = BGW;
            h = 0.038;
            class Attributes {
                font = "PuristaMedium";
                align = "center";
            };
        };
        class ButtonSeven: Life_RscButtonMenu {
          idc = 37456;
          colorBackground[] = {0,0,0,0.9};
          text = "";
          sizeEx = 0.025;
          x = BGX;
          y = BGY + 0.35;
          w = BGW;
          h = 0.038;
          class Attributes {
              font = "PuristaMedium";
              align = "center";
          };
		};
    };
};
