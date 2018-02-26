AnsiString Letra(AnsiString Nif)
{
     int nSuma, nSumaPar, nSumaNon;

     if (Nif.IsEmpty())
          return ("");

     if (isdigit(Nif.c_str()[0]) || AnsiString("KLMXYZ").Pos(Nif.SubString(1, 1)) != 0)  // Persona física
     {
          if (AnsiString("XYZ").Pos(Nif.SubString(1, 1)) != 0)
               Nif = iif(Nif.SubString(1, 1) == "Z", "2", iif(Nif.SubString(1, 1) == "Y", "1", "0")) + Nif.SubString(2, Nif.Length());
          else if (AnsiString("KLM").Pos(Nif.SubString(1, 1)) != 0)
               Nif = Nif.SubString(2, Nif.Length());
               
          return ("TRWAGMYFPDXBNJZSQVHLCKE"[StrToInt(Trim(Nif)) % 23]);
     }            
     else      // Persona jurídica
     {
          if (AnsiString("ABCDEFGHJNPQRSUVW").Pos(Nif.SubString(1, 1)) == 0)
               return ("");

          nSumaPar = 0;
          nSumaNon = 0;
          for (int nLetra = 2; nLetra < 9; nLetra += 2)
          {
               if (nLetra < 8)
                    nSumaPar += StrToInt(Nif.SubString(nLetra + 1, 1));

               nSumaNon += ((2 * StrToInt(Nif.SubString(nLetra, 1))) % 10) + ((2 * StrToInt(Nif.SubString(nLetra, 1))) / 10);
          }

          nSuma = nSumaPar + nSumaNon;
          nSuma = 10 - (nSuma % 10);
          if (nSuma == 10)
               nSuma = 0;

          if (AnsiString("ABDEFGHJUV").Pos(Nif.SubString(1, 1)) == 0)
               return ("ABCDEFGHIJ"[nSuma]);
          else
               return (FormatFloat("0", nSuma));
     }
}
