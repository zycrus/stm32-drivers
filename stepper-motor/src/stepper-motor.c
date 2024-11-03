//
double DegreesToPercent(double _deg)
{
    return _deg/180;
}

/*
    0deg - 1ms
    90deg - 1.5ms
    180deg - 2ms
*/
double PercentToPulse(double _deg, double _time)
{
    return (DegreesToPercent(_deg) + 1);
}
