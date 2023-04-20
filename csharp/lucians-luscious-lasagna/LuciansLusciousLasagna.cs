// https://exercism.org/tracks/csharp/exercises/lucians-luscious-lasagna
class Lasagna
{
    // TODO: define the 'ExpectedMinutesInOven()' method
    public int ExpectedMinutesInOven(){
        var lasagna = new Lasagna();
        return 40;
        
        // lasagna.ExpectedMinutesInOven();
    }

    // TODO: define the 'RemainingMinutesInOven()' method
    public int RemainingMinutesInOven(int elapsedTimeInMinutes)
    {
        return 40 - elapsedTimeInMinutes;
    }

    // TODO: define the 'PreparationTimeInMinutes()' method
    public int PreparationTimeInMinutes(int numbersOfLayers)
    {
        return numbersOfLayers * 2;
    }

    // TODO: define the 'ElapsedTimeInMinutes()' method
    public int ElapsedTimeInMinutes(int numbersOfLayers, int minutesInOven)
    {
        int preperationTime = PreparationTimeInMinutes(numbersOfLayers);
        return preperationTime + minutesInOven;
    }
}
