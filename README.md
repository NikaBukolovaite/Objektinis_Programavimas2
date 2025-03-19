# 🛠️ Kompiliavimo instrukcijos

1. [Atsisiusti g++](https://sourceforge.net/projects/mingw-w64/)
2. [Atsisiusti Make](https://gnuwin32.sourceforge.net/packages/make.htm)
3. Kopijuoti projekto direktorija `git clone https://github.com/NikaBukolovaite/Objektinis_Programavimas.git` (arba Download zip)
4. Atsidaryti komandine eilute projekto direktorijoje ir irasyti: `make -C Vector ; make -C List ; make -C Deque`
5. Paleisti norima programos versija: `./Vector/vektoriai.exe`, `./List/list_main.exe` arba `./Deque/deque_main.exe`

# 📃 Programos naudojimosi instrukcijos

# Kompiuterio charakteristikos

| Komponentas |      Specifikacija      |
| :---------- | :---------------------: |
| CPU         | AMD Ryzen 5 4600H </br> |
| RAM         |     8GB DDR4 </br>      |
| DISK        |    SSD (NVMe) </br>     |

# Programos testavimo rezultatai pradiniam release

## 1000 Studentų analizė

Viso faile yra 18 namų darbų pažymių

### Nuskaitymas (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0072475 | 0.0082808 | 0.0145365 |
| 2 testas | 0.0044263 | 0.0043628 |  0.007807 |
| 3 testas | 0.0046425 | 0.0046128 | 0.0067956 |

### Rusiavimas faile (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas |  0.004638 | 0.0032458 | 0.0077588 |
| 2 testas | 0.0045471 | 0.0035307 | 0.0096666 |
| 3 testas | 0.0045742 | 0.0031883 | 0.0076848 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0006764 | 0.0004916 | 0.0007002 |
| 2 testas | 0.0006803 |   0.00069 | 0.0008425 |
| 3 testas | 0.0006776 | 0.0004679 | 0.0008806 |

### Vidurkiai (sek.):

|                                                           |   Vector |         List |      Deque |
| :-------------------------------------------------------- | -------: | -----------: | ---------: |
| Bendras failo nuskaitymo laikas                           | 0.016316 |     0.017256 |   0.029139 |
| Vidutinis failo nuskaitymo laikas                         | 0.005439 |     0.005752 |   0.009713 |
| Bendras failo rusiavimo laikas                            | 0.013759 |     0.009965 |   0.025110 |
| Vidutinis failo rusiavimo laikas                          | 0.002293 |     0.001661 |   0.004185 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   | 0.002034 |     0.001650 |   0.002423 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas | 0.000678 |     0.000550 |   0.000808 |
| Bendras programos veikimo laikas                          | 0.032109 |     0.028871 |   0,282662 |
| Vidutinis programos veikimo laikas                        | 0.010703 | 0.0096236667 | 0.09422066 |

## 10000 Studentu analize

Viso faile yra 18 namų darbų pažymių

### Nuskaitymas (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0452272 | 0.0787392 | 0.0722085 |
| 2 testas | 0.0491618 | 0.0706549 | 0.0647305 |
| 3 testas | 0.0396006 | 0.0719151 | 0.0690108 |

### Rusiavimas faile (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0064087 | 0.0836519 |  0.102892 |
| 2 testas | 0.0054171 |  0.083851 |   0.10707 |
| 3 testas |  0.006708 | 0.0902805 | 0.0987082 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0550808 | 0.0103057 | 0.0074288 |
| 2 testas | 0.0555215 | 0.0094287 | 0.0124954 |
| 3 testas | 0.0573123 | 0.0122553 |  0.007408 |

### Vidurkiai (sek.):

|                                                           |   Vector |         List |      Deque |
| :-------------------------------------------------------- | -------: | -----------: | ---------: |
| Bendras failo nuskaitymo laikas                           | 0.133990 |     0.221309 |   0.205950 |
| Vidutinis failo nuskaitymo laikas                         | 0.044663 |     0.073770 |   0.068650 |
| Bendras failo rusiavimo laikas                            | 0.167915 |     0.257783 |   0.308670 |
| Vidutinis failo rusiavimo laikas                          | 0.027986 |     0.042964 |   0.051445 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   | 0.018534 |     0.031990 |   0.027332 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas | 0.006178 |     0.010663 |   0.009111 |
| Bendras programos veikimo laikas                          | 0.320439 |     0.511082 |   0.541952 |
| Vidutinis programos veikimo laikas                        | 0.106813 | 0.1703606667 | 0.18065066 |

## 100000 Studentu analize

Viso faile yra 14 namų darbų pažymių

### Nuskaitymas (sek.):

|          |   Vector |     List |    Deque |
| :------- | -------: | -------: | -------: |
| 1 testas | 0.333077 | 0.577193 | 0.530389 |
| 2 testas | 0.321548 | 0.613278 | 0.533229 |
| 3 testas | 0.325427 | 0.586978 | 0.537504 |

### Rusiavimas faile (sek.):

|          |   Vector |    List |   Deque |
| :------- | -------: | ------: | ------: |
| 1 testas | 0.673029 |  1.0759 | 1.31066 |
| 2 testas | 0.680436 | 1.07855 | 1.26595 |
| 3 testas | 0.678414 | 1.08067 | 1.28526 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |    Vector |      List |     Deque |
| :------- | --------: | --------: | --------: |
| 1 testas | 0.0569962 | 0.0931008 | 0.0756288 |
| 2 testas | 0.0575559 |   0.10202 | 0.0733271 |
| 3 testas | 0.0557648 | 0.0904348 | 0.0774862 |

### Vidurkiai (sek.):

|                                                           |   Vector |      List |     Deque |
| :-------------------------------------------------------- | -------: | --------: | --------: |
| Bendras failo nuskaitymo laikas                           | 0.980052 |  1.777449 |  1.601122 |
| Vidutinis failo nuskaitymo laikas                         | 0.326684 |  0.592483 |  0.533707 |
| Bendras failo rusiavimo laikas                            | 2.031878 |  3.235127 |  3.861866 |
| Vidutinis failo rusiavimo laikas                          | 0.338646 |  0.539188 |  0.643644 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   | 0.170317 |  0.285555 |  0.226442 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas | 0.056772 |  0.095185 |  0.075481 |
| Bendras programos veikimo laikas                          | 3.182247 |  5.298131 |   5.68943 |
| Vidutinis programos veikimo laikas                        | 1.060749 | 1.7660436 | 1.8967466 |

## 1000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

### Nuskaitymas (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 3.95492 | 7.15517 | 6.40691 |
| 2 testas | 3.87019 |  6.7632 | 6.42821 |
| 3 testas | 3.84463 | 6.80788 | 6.49617 |

### Rusiavimas faile (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 9.88418 | 13.6062 | 14.4732 |
| 2 testas |  9.8109 | 12.9613 | 14.8146 |
| 3 testas | 9.82957 | 12.8813 | 14.3128 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |   Vector |     List |    Deque |
| :------- | -------: | -------: | -------: |
| 1 testas | 0.574952 | 0.919172 |  0.90257 |
| 2 testas | 0.574212 | 0.953543 | 0.921527 |
| 3 testas | 0.574577 |  1.02545 | 0.940349 |

### Vidurkiai (sek.):

|                                                           |        Vector |        List |       Deque |
| :-------------------------------------------------------- | ------------: | ----------: | ----------: |
| Bendras failo nuskaitymo laikas                           |     11.669734 |   20.726261 |   19.331293 |
| Vidutinis failo nuskaitymo laikas                         |      3.889911 |    6.908754 |    6.443764 |
| Bendras failo rusiavimo laikas                            |     29.524652 |   39.448779 |   43.600653 |
| Vidutinis failo rusiavimo laikas                          |      4.920775 |    6.574797 |    7.266776 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   |      1.723741 |    2.898165 |    2.764446 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas |      0.574580 |    0.966055 |    0.921482 |
| Bendras programos veikimo laikas                          |     42.918127 |   63.073205 |   65.696392 |
| Vidutinis programos veikimo laikas                        | 14.3060423333 | 21.02440166 | 21.89879733 |

## 10000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

### Nuskaitymas (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 44.5152 | 55.7881 | 45.5688 |
| 2 testas | 43.9039 |  45.815 | 45.0055 |
| 3 testas | 41.9285 | 46.5904 | 50.5224 |

### Rusiavimas faile (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 119.483 | 115.353 | 130.304 |
| 2 testas | 119.413 | 115.038 | 128.954 |
| 3 testas | 119.039 |  115.01 | 129.462 |

### Rusiavimas i kietekus ir vargsiukus (sek.):

|          |  Vector |    List |   Deque |
| :------- | ------: | ------: | ------: |
| 1 testas | 6.28305 | 11.1458 | 8.20431 |
| 2 testas | 6.71133 | 10.1772 | 8.78032 |
| 3 testas | 6.47369 | 9.98839 | 8.81014 |

### Vidurkiai (sek.):

|                                                           |     Vector |       List |        Deque |
| :-------------------------------------------------------- | ---------: | ---------: | -----------: |
| Bendras failo nuskaitymo laikas                           | 130.347577 | 148.193507 |   141.096647 |
| Vidutinis failo nuskaitymo laikas                         |  43.449192 |  49.397836 |    47.032216 |
| Bendras failo rusiavimo laikas                            | 357.935381 | 345.401288 |   388.718866 |
| Vidutinis failo rusiavimo laikas                          |  59.655897 |  57.566881 |    64.786478 |
| Bendras failo rusiavimo i kietekus ir vargsiukus laikas   |  19.468074 |  31.311419 |    25.794769 |
| Vidutinis failo rusiavimo i kietekus ir vargsiukus laikas |   6.489358 |  10.437140 |     8.598256 |
| Bendras programos veikimo laikas                          | 507.751032 | 524.906214 |   555.610282 |
| Vidutinis programos veikimo laikas                        | 169.250344 | 174.968738 | 185.20342733 |

# Programos rusiavimo i kietekus ir vargsiukus greitis priklausomai nuo strategiju rezultatai

## 1 strategija

### 1000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         |  0.002109 | 0.0012078 | 0.0014959 |
| 2 testas         | 0.0029129 | 0.0018549 | 0.0015636 |
| 3 testas         |  0.002204 | 0.0017481 | 0.0021251 |
| Bendras laikas   |  0.007226 |  0.004811 |  0.005185 |
| Vidutinis laikas |  0.002409 |  0.001604 |  0.001728 |

### 10000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         | 0.0160859 | 0.0126965 | 0.0116877 |
| 2 testas         | 0.0141176 | 0.0134405 | 0.0112872 |
| 3 testas         | 0.0168775 | 0.0160783 | 0.0112756 |
| Bendras laikas   |  0.047081 |  0.042215 |  0.034251 |
| Vidutinis laikas |  0.015694 |  0.014072 |  0.011417 |

### 100000 Studentu analize

Viso faile yra 14 namų darbų pažymių

|                  |   Vector |     List |    Deque |
| :--------------- | -------: | -------: | -------: |
| 1 testas         | 0.134149 | 0.136899 | 0.113251 |
| 2 testas         | 0.133631 | 0.142888 | 0.112049 |
| 3 testas         | 0.129876 | 0.131859 | 0.121555 |
| Bendras laikas   | 0.397656 | 0.411647 | 0.346855 |
| Vidutinis laikas | 0.132552 | 0.137216 | 0.115618 |

### 1000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |   Vector |     List |    Deque |
| :--------------- | -------: | -------: | -------: |
| 1 testas         |   1.5492 |  1.55088 |  1.45731 |
| 2 testas         |  1.51583 |  1.61241 |  1.30246 |
| 3 testas         |  1.49225 |  1.49797 |  1.39939 |
| Bendras laikas   | 4.557273 | 4.661263 | 4.159162 |
| Vidutinis laikas | 1.519091 | 1.553754 | 1.386387 |

### 10000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         |    15.166 |   12.4339 |   12.5972 |
| 2 testas         |   14.1786 |   13.1281 |   11.9944 |
| 3 testas         |   13.9391 |   13.1281 |    11.968 |
| Bendras laikas   | 43.283757 | 39.586256 | 36.559604 |
| Vidutinis laikas | 14.427919 | 13.195419 | 12.186535 |

## 2 strategija

### 1000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         | 0.0020277 | 0.0016194 | 0.0018491 |
| 2 testas         | 0.0019987 | 0.0010802 | 0.0020192 |
| 3 testas         | 0.0020458 | 0.0011127 | 0.0019972 |
| Bendras laikas   |  0.006072 |  0.003812 |  0.005866 |
| Vidutinis laikas |  0.002024 |  0.001271 |  0.001955 |

### 10000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         | 0.0836527 | 0.0112158 | 0.0241349 |
| 2 testas         | 0.0217737 | 0.0136404 |  0.023094 |
| 3 testas         | 0.0217998 | 0.0179673 | 0.0218672 |
| Bendras laikas   |  0.127226 |  0.042824 |  0.069096 |
| Vidutinis laikas |  0.042409 |  0.014275 |  0.023032 |

### 100000 Studentu analize

Viso faile yra 14 namų darbų pažymių

|                  |   Vector |     List |    Deque |
| :--------------- | -------: | -------: | -------: |
| 1 testas         |  0.30975 | 0.177184 | 0.280622 |
| 2 testas         | 0.260698 | 0.188116 |  0.28941 |
| 3 testas         | 0.251467 | 0.181947 | 0.294386 |
| Bendras laikas   | 0.821915 | 0.547246 | 0.864418 |
| Vidutinis laikas | 0.273972 | 0.182415 | 0.288139 |

### 1000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |   Vector |     List |     Deque |
| :--------------- | -------: | -------: | --------: |
| 1 testas         |  3.25533 |  2.65689 |   3.86107 |
| 2 testas         |  3.19483 |  2.59375 |   3.61851 |
| 3 testas         |  3.22155 |  2.47487 |   3.83965 |
| Bendras laikas   | 9.671704 | 7.725517 | 11.319226 |
| Vidutinis laikas | 3.223901 | 2.575172 |  3.773075 |

### 10000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         |   25.9085 |   26.6098 |   29.7575 |
| 2 testas         |   26.4085 |   22.6966 |   29.5761 |
| 3 testas         |   29.7513 |    23.138 |   30.6643 |
| Bendras laikas   | 82.068295 | 72.444385 | 89.997919 |
| Vidutinis laikas | 27.356098 | 24.148128 | 29.999306 |

## 3 strategija

Pagal 1 strategija naudojant std::stable_partition

### 1000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         |  0.001565 | 0.0017377 | 0.0019046 |
| 2 testas         | 0.0017442 | 0.0027647 | 0.0019809 |
| 3 testas         | 0.0017182 | 0.0017408 | 0.0021929 |
| Bendras laikas   |  0.005027 |  0.006243 |  0.006078 |
| Vidutinis laikas |  0.001676 |  0.002081 |  0.002026 |

### 10000 Studentu analize

Viso faile yra 18 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         | 0.0090895 | 0.0222504 | 0.0195486 |
| 2 testas         | 0.0147448 |  0.021207 | 0.0163617 |
| 3 testas         | 0.0151281 | 0.0176257 | 0.0240077 |
| Bendras laikas   |  0.038962 | 0.4521997 |  0.059918 |
| Vidutinis laikas |  0.012987 | 0.1507332 |  0.019973 |

### 100000 Studentu analize

Viso faile yra 14 namų darbų pažymių

|                  |    Vector |     List |    Deque |
| :--------------- | --------: | -------: | -------: |
| 1 testas         |  0.101376 |  0.10475 | 0.122028 |
| 2 testas         | 0.0868336 | 0.103708 | 0.122189 |
| 3 testas         | 0.0868577 |  0.10367 | 0.126421 |
| Bendras laikas   |  0.275067 | 0.312128 | 0.370638 |
| Vidutinis laikas |  0.091689 | 0.104043 | 0.123546 |

### 1000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |   Vector |     List |    Deque |
| :--------------- | -------: | -------: | -------: |
| 1 testas         | 0.962317 |  1.11344 |  1.32951 |
| 2 testas         | 0.967044 |  1.11441 |  1.31631 |
| 3 testas         | 0.971096 |  1.12013 |  1.29266 |
| Bendras laikas   | 2.900457 | 3.347979 | 3.938470 |
| Vidutinis laikas | 0.966819 | 1.115993 | 1.312823 |

### 10000000 Studentu analize

Viso faile yra 19 namų darbų pažymių

|                  |    Vector |      List |     Deque |
| :--------------- | --------: | --------: | --------: |
| 1 testas         |   11.3622 |   12.7829 |   15.1868 |
| 2 testas         |   11.2361 |   16.5202 |   16.1749 |
| 3 testas         |    11.024 |   13.9905 |   17.4642 |
| Bendras laikas   | 33.622268 | 43.293562 | 48.825895 |
| Vidutinis laikas | 11.207423 | 14.431187 | 16.275298 |

# 5 failų kūrimas

![imagine alt](https://github.com/NikaBukolovaite/Objektinis_Programavimas/blob/a4013df6d9d8fbc7987f3f46eff7fbc55adf39d2/Kurimo%20laikas.png)
