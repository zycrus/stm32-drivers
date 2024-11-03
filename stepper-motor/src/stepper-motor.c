// Period - 20ms
// Freq - 50Hz
// V - 4.8V ~ 5V


double DegreesToPercent(double _deg)
{
    return _deg/180;
}

/*
    0deg - 1ms
    90deg - 1.5ms
    180deg - 2ms
*/
uint16_t PercentToPulse(double _deg, double _time)
{
    return (uint16_t)(DegreesToPercent(_deg) + 1);
}

void SendPWM(uint16_t _pulse)
{
    TIM1->CCR1 = _pulse;
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
}
