using System;
using System.Numerics;

public static class DiffieHellman
{
    public static BigInteger PrivateKey(BigInteger primeP) 
    {
        var rand = new Random();
        return rand.Next(1, (int)primeP);
    }

    public static BigInteger PublicKey(BigInteger primeP, BigInteger primeG, BigInteger privateKey) 
    {
        // A = gᵃ mod p
        double power =  Math.Pow((double)primeG, (double)privateKey);
        double modulo  = power % (double)primeP;
        return (BigInteger)modulo;
    }

    public static BigInteger Secret(BigInteger primeP, BigInteger publicKey, BigInteger privateKey) 
    {
        /*
        Alice and Bob exchange public keys.
        Alice calculates secret key s.
        
            s = Bᵃ mod p
        
        Bob calculates
        
            s = Aᵇ mod p
        
        The calculations produce the same result!
        Alice and Bob now share secret s.
        */
        double power =  Math.Pow((double)publicKey, (double)privateKey);
        double modulo = power % (double)primeP;
        return (BigInteger)modulo;
    }
}