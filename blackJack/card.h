#pragma once
#include <iostream>
using namespace std

public class Card
{
    public string Mark{ get; set; }
        /// <summary>
        /// ①トランプの「数値」
        /// </summary>
    public int No{ get; set; }

        /// <summary>
        /// ②トランプの「表示」
        /// </summary>
        public string NoString
    {
        get
        {
            //①トランプの「数値」を使用して判定する
            switch (No)
            {
                // ......ここで条件分岐。1と11と12と13の場合、AとJとQとKを返却する
            }

            return No.ToString();
        }
    }

}
        /// <summary>
        /// ③ブラックジャックの「点」
        /// </summary>
            public int Point
        {
            get
            {
                //①トランプの「数値」を使用して判定する
                switch (No)
                {
                    // ......ここで条件分岐。11と12と13の場合、ともに10を返却する
                }

                return No;
            }
        }
       }
}