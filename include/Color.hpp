#include <cinttypes>

namespace vulture{
    struct Color{
        uint8_t r, g, b, a;

        Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
                : r(r), g(g), b(b), a(a){}

        static inline const Color TransparentBlack(){
            return Color(0x00, 0x00, 0x00, 0xff);
        }

        static inline const Color Transparent(){
            return Color(0x00, 0x00, 0x00, 0x00);

        static inline const Color AliceBlue(){
            return Color(0xf0, 0xf8, 0xff, 0xff);
        }

        static inline const Color AntiqueWhite(){
            return Color(0xfa, 0xeb, 0xd7, 0xff);
        }

        static inline const Color Aqua(){
            return Color(0x00, 0xff, 0xff, 0xff);
        }

        static inline const Color Aquamarine(){
            return Color(0x7f, 0xff, 0xd4, 0xff);
        }

        static inline const Color Azure(){
            return Color(0xf0, 0xff, 0xff, 0xff);
        }

        static inline const Color Beige(){
            return Color(0xf5, 0xf5, 0xdc, 0xff);
        }

        static inline const Color Bisque(){
            return Color(0xff, 0xe4, 0xc4, 0xff);
        }

        static inline const Color Black(){
            return Color(0x00, 0x00, 0x00, 0xff);
        }

        static inline const Color BlanchedAlmond(){
            return Color(0xff, 0xeb, 0xcd, 0xff);
        }

        static inline const Color Blue(){
            return Color(0x00, 0x00, 0xff, 0xff);
        }

        static inline const Color BlueViolet(){
            return Color(0x8a, 0x2b, 0xe2, 0xff);
        }

        static inline const Color Brown(){
            return Color(0xa5, 0x2a, 0x2a, 0xff);
        }

        static inline const Color BurlyWood(){
            return Color(0xde, 0xb8, 0x87, 0xff);
        }

        static inline const Color CadetBlue(){
            return Color(0x5f, 0x9e, 0xa0, 0xff);
        }

        static inline const Color Chartreuse(){
            return Color(0x7f, 0xff, 0x00, 0xff);
        }

        static inline const Color Chocolate(){
            return Color(0xd2, 0x69, 0x1e, 0xff);
        }

        static inline const Color Coral(){
            return Color(0xff, 0x7f, 0x50, 0xff);
        }

        static inline const Color CornflowerBlue(){
            return Color(0x64, 0x95, 0xed, 0xff);
        }

        static inline const Color Cornsilk(){
            return Color(0xff, 0xf8, 0xdc, 0xff);
        }

        static inline const Color Crimson(){
            return Color(0xdc, 0x14, 0x3c, 0xff);
        }

        static inline const Color Cyan(){
            return Color(0x00, 0xff, 0xff, 0xff);
        }

        static inline const Color DarkBlue(){
            return Color(0x00, 0x00, 0x8b, 0xff);
        }

        static inline const Color DarkCyan(){
            return Color(0x00, 0x8b, 0x8b, 0xff);
        }

        static inline const Color DarkGoldenrod(){
            return Color(0xb8, 0x86, 0x0b, 0xff);
        }

        static inline const Color DarkGray(){
            return Color(0xa9, 0xa9, 0xa9, 0xff);
        }

        static inline const Color DarkGreen(){
            return Color(0x00, 0x64, 0x00, 0xff);
        }

        static inline const Color DarkKhaki(){
            return Color(0xbd, 0xb7, 0x6b, 0xff);
        }

        static inline const Color DarkMagenta(){
            return Color(0x8b, 0x00, 0x8b, 0xff);
        }

        static inline const Color DarkOliveGreen(){
            return Color(0x55, 0x6b, 0x2f, 0xff);
        }

        static inline const Color DarkOrange(){
            return Color(0xff, 0x8c, 0x00, 0xff);
        }

        static inline const Color DarkOrchid(){
            return Color(0x99, 0x32, 0xcc, 0xff);
        }

        static inline const Color DarkRed(){
            return Color(0x8b, 0x00, 0x00, 0xff);
        }

        static inline const Color DarkSalmon(){
            return Color(0xe9, 0x96, 0x7a, 0xff);
        }

        static inline const Color DarkSeaGreen(){
            return Color(0x8f, 0xbc, 0x8b, 0xff);
        }

        static inline const Color DarkSlateBlue(){
            return Color(0x48, 0x3d, 0x8b, 0xff);
        }

        static inline const Color DarkSlateGray(){
            return Color(0x2f, 0x4f, 0x4f, 0xff);
        }

        static inline const Color DarkTurquoise(){
            return Color(0x00, 0xce, 0xd1, 0xff);
        }

        static inline const Color DarkViolet(){
            return Color(0x94, 0x00, 0xd3, 0xff);
        }

        static inline const Color DeepPink(){
            return Color(0xff, 0x14, 0x93, 0xff);
        }

        static inline const Color DeepSkyBlue(){
            return Color(0x00, 0xbf, 0xff, 0xff);
        }

        static inline const Color DimGray(){
            return Color(0x69, 0x69, 0x69, 0xff);
        }

        static inline const Color DodgerBlue(){
            return Color(0x1e, 0x90, 0xff, 0xff);
        }

        static inline const Color Firebrick(){
            return Color(0xb2, 0x22, 0x22, 0xff);
        }

        static inline const Color FloralWhite(){
            return Color(0xff, 0xfa, 0xf0, 0xff);
        }

        static inline const Color ForestGreen(){
            return Color(0x22, 0x8b, 0x22, 0xff);
        }

        static inline const Color Fuchsia(){
            return Color(0xff, 0x00, 0xff, 0xff);
        }

        static inline const Color Gainsboro(){
            return Color(0xdc, 0xdc, 0xdc, 0xff);
        }

        static inline const Color GhostWhite(){
            return Color(0xf8, 0xf8, 0xff, 0xff);
        }

        static inline const Color Gold(){
            return Color(0xff, 0xd7, 0x00, 0xff);
        }

        static inline const Color Goldenrod(){
            return Color(0xda, 0xa5, 0x20, 0xff);
        }

        static inline const Color Gray(){
            return Color(0x80, 0x80, 0x80, 0xff);
        }

        static inline const Color Green(){
            return Color(0x00, 0x80, 0x00, 0xff);
        }

        static inline const Color GreenYellow(){
            return Color(0xad, 0xff, 0x2f, 0xff);
        }

        static inline const Color Honeydew(){
            return Color(0xf0, 0xff, 0xf0, 0xff);
        }

        static inline const Color HotPink(){
            return Color(0xff, 0x69, 0xb4, 0xff);
        }

        static inline const Color IndianRed(){
            return Color(0xcd, 0x5c, 0x5c, 0xff);
        }

        static inline const Color Indigo(){
            return Color(0x4b, 0x00, 0x82, 0xff);
        }

        static inline const Color Ivory(){
            return Color(0xff, 0xff, 0xf0, 0xff);
        }

        static inline const Color Khaki(){
            return Color(0xf0, 0xe6, 0x8c, 0xff);
        }

        static inline const Color Lavender(){
            return Color(0xe6, 0xe6, 0xfa, 0xff);
        }

        static inline const Color LavenderBlush(){
            return Color(0xff, 0xf0, 0xf5, 0xff);
        }

        static inline const Color LawnGreen(){
            return Color(0x7c, 0xfc, 0x00, 0xff);
        }

        static inline const Color LemonChiffon(){
            return Color(0xff, 0xfa, 0xcd, 0xff);
        }

        static inline const Color LightBlue(){
            return Color(0xad, 0xd8, 0xe6, 0xff);
        }

        static inline const Color LightCoral(){
            return Color(0xf0, 0x80, 0x80, 0xff);
        }

        static inline const Color LightCyan(){
            return Color(0xe0, 0xff, 0xff, 0xff);
        }

        static inline const Color LightGoldenrodYellow(){
            return Color(0xfa, 0xfa, 0xd2, 0xff);
        }

        static inline const Color LightGray(){
            return Color(0xd3, 0xd3, 0xd3, 0xff);
        }

        static inline const Color LightGreen(){
            return Color(0x90, 0xee, 0x90, 0xff);
        }

        static inline const Color LightPink(){
            return Color(0xff, 0xb6, 0xc1, 0xff);
        }

        static inline const Color LightSalmon(){
            return Color(0xff, 0xa0, 0x7a, 0xff);
        }

        static inline const Color LightSeaGreen(){
            return Color(0x20, 0xb2, 0xaa, 0xff);
        }

        static inline const Color LightSkyBlue(){
            return Color(0x87, 0xce, 0xfa, 0xff);
        }

        static inline const Color LightSlateGray(){
            return Color(0x77, 0x88, 0x99, 0xff);
        }

        static inline const Color LightSteelBlue(){
            return Color(0xb0, 0xc4, 0xde, 0xff);
        }

        static inline const Color LightYellow(){
            return Color(0xff, 0xff, 0xe0, 0xff);
        }

        static inline const Color Lime(){
            return Color(0x00, 0xff, 0x00, 0xff);
        }

        static inline const Color LimeGreen(){
            return Color(0x32, 0xcd, 0x32, 0xff);
        }

        static inline const Color Linen(){
            return Color(0xfa, 0xf0, 0xe6, 0xff);
        }

        static inline const Color Magenta(){
            return Color(0xff, 0x00, 0xff, 0xff);
        }

        static inline const Color Maroon(){
            return Color(0x80, 0x00, 0x00, 0xff);
        }

        static inline const Color MediumAquamarine(){
            return Color(0x66, 0xcd, 0xaa, 0xff);
        }

        static inline const Color MediumBlue(){
            return Color(0x00, 0x00, 0xcd, 0xff);
        }

        static inline const Color MediumOrchid(){
            return Color(0xba, 0x55, 0xd3, 0xff);
        }

        static inline const Color MediumPurple(){
            return Color(0x93, 0x70, 0xdb, 0xff);
        }

        static inline const Color MediumSeaGreen(){
            return Color(0x3c, 0xb3, 0x71, 0xff);
        }

        static inline const Color MediumSlateBlue(){
            return Color(0x7b, 0x68, 0xee, 0xff);
        }

        static inline const Color MediumSpringGreen(){
            return Color(0x00, 0xfa, 0x9a, 0xff);
        }

        static inline const Color MediumTurquoise(){
            return Color(0x48, 0xd1, 0xcc, 0xff);
        }

        static inline const Color MediumVioletRed(){
            return Color(0xc7, 0x15, 0x85, 0xff);
        }

        static inline const Color MidnightBlue(){
            return Color(0x19, 0x19, 0x70, 0xff);
        }

        static inline const Color MintCream(){
            return Color(0xf5, 0xff, 0xfa, 0xff);
        }

        static inline const Color MistyRose(){
            return Color(0xff, 0xe4, 0xe1, 0xff);
        }

        static inline const Color Moccasin(){
            return Color(0xff, 0xe4, 0xb5, 0xff);
        }

        static inline const Color NavajoWhite(){
            return Color(0xff, 0xde, 0xad, 0xff);
        }

        static inline const Color Navy(){
            return Color(0x00, 0x00, 0x80, 0xff);
        }

        static inline const Color OldLace(){
            return Color(0xfd, 0xf5, 0xe6, 0xff);
        }

        static inline const Color Olive(){
            return Color(0x80, 0x80, 0x00, 0xff);
        }

        static inline const Color OliveDrab(){
            return Color(0x6b, 0x8e, 0x23, 0xff);
        }

        static inline const Color Orange(){
            return Color(0xff, 0xa5, 0x00, 0xff);
        }

        static inline const Color OrangeRed(){
            return Color(0xff, 0x45, 0x00, 0xff);
        }

        static inline const Color Orchid(){
            return Color(0xda, 0x70, 0xd6, 0xff);
        }

        static inline const Color PaleGoldenrod(){
            return Color(0xee, 0xe8, 0xaa, 0xff);
        }

        static inline const Color PaleGreen(){
            return Color(0x98, 0xfb, 0x98, 0xff);
        }

        static inline const Color PaleTurquoise(){
            return Color(0xaf, 0xee, 0xee, 0xff);
        }

        static inline const Color PaleVioletRed(){
            return Color(0xdb, 0x70, 0x93, 0xff);
        }

        static inline const Color PapayaWhip(){
            return Color(0xff, 0xef, 0xd5, 0xff);
        }

        static inline const Color PeachPuff(){
            return Color(0xff, 0xda, 0xb9, 0xff);
        }

        static inline const Color Peru(){
            return Color(0xcd, 0x85, 0x3f, 0xff);
        }

        static inline const Color Pink(){
            return Color(0xff, 0xc0, 0xcb, 0xff);
        }

        static inline const Color Plum(){
            return Color(0xdd, 0xa0, 0xdd, 0xff);
        }

        static inline const Color PowderBlue(){
            return Color(0xb0, 0xe0, 0xe6, 0xff);
        }

        static inline const Color Purple(){
            return Color(0x80, 0x00, 0x80, 0xff);
        }

        static inline const Color Red(){
            return Color(0xff, 0x00, 0x00, 0xff);
        }

        static inline const Color RosyBrown(){
            return Color(0xbc, 0x8f, 0x8f, 0xff);
        }

        static inline const Color RoyalBlue(){
            return Color(0x41, 0x69, 0xe1, 0xff);
        }

        static inline const Color SaddleBrown(){
            return Color(0x8b, 0x45, 0x13, 0xff);
        }

        static inline const Color Salmon(){
            return Color(0xfa, 0x80, 0x72, 0xff);
        }

        static inline const Color SandyBrown(){
            return Color(0xf4, 0xa4, 0x60, 0xff);
        }

        static inline const Color SeaGreen(){
            return Color(0x2e, 0x8b, 0x57, 0xff);
        }

        static inline const Color SeaShell(){
            return Color(0xff, 0xf5, 0xee, 0xff);
        }

        static inline const Color Sienna(){
            return Color(0xa0, 0x52, 0x2d, 0xff);
        }

        static inline const Color Silver(){
            return Color(0xc0, 0xc0, 0xc0, 0xff);
        }

        static inline const Color SkyBlue(){
            return Color(0x87, 0xce, 0xeb, 0xff);
        }

        static inline const Color SlateBlue(){
            return Color(0x6a, 0x5a, 0xcd, 0xff);
        }

        static inline const Color SlateGray(){
            return Color(0x70, 0x80, 0x90, 0xff);
        }

        static inline const Color Snow(){
            return Color(0xff, 0xfa, 0xfa, 0xff);
        }

        static inline const Color SpringGreen(){
            return Color(0x00, 0xff, 0x7f, 0xff);
        }

        static inline const Color SteelBlue(){
            return Color(0x46, 0x82, 0xb4, 0xff);
        }

        static inline const Color Tan(){
            return Color(0xd2, 0xb4, 0x8c, 0xff);
        }

        static inline const Color Teal(){
            return Color(0x00, 0x80, 0x80, 0xff);
        }

        static inline const Color Thistle(){
            return Color(0xd8, 0xbf, 0xd8, 0xff);
        }

        static inline const Color Tomato(){
            return Color(0xff, 0x63, 0x47, 0xff);
        }

        static inline const Color Turquoise(){
            return Color(0x40, 0xe0, 0xd0, 0xff);
        }

        static inline const Color Violet(){
            return Color(0xee, 0x82, 0xee, 0xff);
        }

        static inline const Color Wheat(){
            return Color(0xf5, 0xde, 0xb3, 0xff);
        }

        static inline const Color White(){
            return Color(0xff, 0xff, 0xff, 0xff);
        }

        static inline const Color WhiteSmoke(){
            return Color(0xf5, 0xf5, 0xf5, 0xff);
        }

        static inline const Color Yellow(){
            return Color(0xff, 0xff, 0x00, 0xff);
        }

        static inline const Color YellowGreen(){
            return Color(0x9a, 0xcd, 0x32, 0xff);
        }
    };
}
