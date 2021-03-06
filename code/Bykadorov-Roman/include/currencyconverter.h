// Copyright 2014 Bykadorov Roman

#ifndef CODE_BYKADOROV_ROMAN_INCLUDE_CURRENCYCONVERTER_H_
#define CODE_BYKADOROV_ROMAN_INCLUDE_CURRENCYCONVERTER_H_

class CurrencyConverter {
 public:
    CurrencyConverter();
    ~CurrencyConverter();
    enum Currency {
        USD = 1,
        EUR = 2,
        RUB = 3,
        // Фунты-стерлингов
        GBP = 4,
        // Японская иена
        JPY = 5,
        // Норвежская крона
        NOK = 6
    };
    double convert(Currency from, Currency to, double value);
};
#endif  // CODE_BYKADOROV_ROMAN_INCLUDE_CURRENCYCONVERTER_H_
