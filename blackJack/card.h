#pragma once
#include <iostream>
using namespace std

public class Card
{
    public string Mark{ get; set; }
        /// <summary>
        /// �@�g�����v�́u���l�v
        /// </summary>
    public int No{ get; set; }

        /// <summary>
        /// �A�g�����v�́u�\���v
        /// </summary>
        public string NoString
    {
        get
        {
            //�@�g�����v�́u���l�v���g�p���Ĕ��肷��
            switch (No)
            {
                // ......�����ŏ�������B1��11��12��13�̏ꍇ�AA��J��Q��K��ԋp����
            }

            return No.ToString();
        }
    }

}
        /// <summary>
        /// �B�u���b�N�W���b�N�́u�_�v
        /// </summary>
            public int Point
        {
            get
            {
                //�@�g�����v�́u���l�v���g�p���Ĕ��肷��
                switch (No)
                {
                    // ......�����ŏ�������B11��12��13�̏ꍇ�A�Ƃ���10��ԋp����
                }

                return No;
            }
        }
       }
}