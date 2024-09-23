# Meranie

## Meranie napätia

- Voltmeter sa pripája paralelne k vetvi (prvku), na ktorej chceme zmerať napätie
  - Voltmeter poznáme analógový (ručičkový) a digitálny (číslicový)

#### Vnútorný odpor voltmetra

- Mal by byť čo **najväčší**, aby čo najmenej ovplyvnil meraný obvod
- Z pohľadu obvodu je voltmeter ďaľšia vetva zapojená medzi dvoma uzlami, vetva voltmetra teda odobere z obvodu časť prúdu

[obr-01]

**Zmena rozsahu voltmetra** - pomocou _predradníkov_ (predradných odporov v sérii s voltmetrom) a zmenou vstupných svoriek alebo prepínačom

- Číslicové voltmetre majú obvody CMOS, majú teda veľmi vysoký vstupný odpor. Je lepšie použiť delič napätia alebo samotný predradník

### Meranie striedavého napätia

- Meraná je buď stredná hodnota (avg), alebo efektívna hodnota (RMS)

## Meranie prúdu

- Ampérmeter sa pripája do série k prvkom

#### Vnútorný odpor ampérmetru

- Mal by byť čo najmenší, aby čo najmenej ovplyvnil meraný obvod
- Z pohľadu obvodu je ampérmeter ďalší prvok vo vetve, ktorý kladie odpor

[obr-02]

**Zmena rozsahu ampérmetra** - pomocou _bočníkov_ (odpor paralelne s ampérmetrom) a zmenou vstupných svoriek alebo prepínačom

---

**Voľba rozsahu voltmetra a ampérmetra** - vhodné začať u najväčšieho rozsahu a postupne znižovať, dokým

- ručička nie je v druhej polovici (ideálne v poslednej tretine) stupnice
- je zaplnených čo najviac miest na digitálnom

## Meranie odporov

- **Ohmova** metóda - zmeriame $U$ a $I$ a pomocou Ohmovho zákona vypočítame $R = U / I$
- **Priama** metóda - ohmmeter

## Osciloskop

- Prístroj na pozorovanie kmitov (oscilácií)
- zobrazuje napätie
  - **v závislosti na čase**
  - v závislosti na inom napätí
- **Princíp**:
  - na obrazovke sa kreslí čiara. Pohyb zľava doprava je zpravidla plynulý (plynutie času), vychýlenie nahor či nadol je ovplyvnené okamžitou hodnotou napätia