#pragma once
#include <iostream>
using namespace std

public class Card
{
    public string Mark{ get; set; }
        /// <summary>
        /// �@トランプの「数値」
        /// </summary>
    public int No{ get; set; }

        /// <summary>
        /// �Aトランプの「表示」
        /// </summary>
        public string NoString
    {
        get
        {
            //�@トランプの「数値」を使用して判定する
            switch (No)
            {
                // ......ここで条件分岐。1と11と12と13の場合、AとJとQとKを返却する
            }

            return No.ToString();
        }
    }

}
        /// <summary>
        /// �Bブラックジャックの「点」
        /// </summary>
            public int Point
        {
            get
            {
                //�@トランプの「数値」を使用して判定する
                switch (No)
                {
                    // ......ここで条件分岐。11と12と13の場合、ともに10を返却する
                }

                return No;
            }
        }
       }
}