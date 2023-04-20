using System;

static class AssemblyLine
{
    public static double SuccessRate(int speed)
    {
        if(speed <1)
            return 0;
        else if(speed <= 4)
            return Convert.ToDouble(1);
        else if(speed <= 8)
            return 0.9;
        else if(speed == 9)
            return 0.8;
        else if(speed == 10)
            return 0.77;
        
        return 0;
    }
    
    public static double ProductionRatePerHour(int speed)
    {
            return 221.0 * Convert.ToDouble(speed) * Convert.ToDouble(SuccessRate(speed));
    }

    public static int WorkingItemsPerMinute(int speed)
    {   
        double productionPerMinute = ProductionRatePerHour(speed) / 60.0;
        return Convert.ToInt32(Math.Round(productionPerMinute,0 ,MidpointRounding.ToZero));
    }
}
