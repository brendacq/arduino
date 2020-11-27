# Force Sensing Resistor  - FSR402

Basicamente, os FSR *(Fig. 1)* são dispositivos que produzem uma queda na resistência elétrica conforme mais força física (ou pressão) é aplicada sobre ele *(Fig. 2)*. A quantidade de eletricidade que é possível fluir no circuito depende da pressão exercida no sensor, já que, quanto maior a pressão, mais material condutivo entrará em contato com os fios e aumentar a saída elétrica de forma previsível - o que permite detectar mudanças na Força também.

| ![FSR](https://sc01.alicdn.com/kf/HTB1OCy3RpXXXXX7XFXXq6xXFXXXb.jpg_350x350.jpg) |
| :------------------------------------------------------------------------------: |
|                                *Fig. 1 - FSR402*                                 |

| ![Gráfico Resistencia Força](res-force.png) |
| :-----------------------------------------: |
|     *Fig. 2 - Resistência x Força (g)*      |

## Informações Técnicas

* **Referência:** FSR 402
* **Diâmetro:** Ø18,28mm *(parte ativa: Ø12,7mm)*
* **Sensibiliade:** 0.1N a 10.0²N

| ![Dados Mecânicos](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQcmUB4F21NUd-uNBaRx7f7j2NiITUlnPTgyZD--J6Q7uS4tnlN8xErVE07WKdFnc-f_P3Urr0hpJMZt5AymeErtTilnUJHjjo&usqp=CAU&ec=45732301) |
| :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
|                                                                                    *Fig. 3 - Dados mecânicos*                                                                                    |

## Aplicação

Para medir a força de Newton através de um FSR é boa idéia mapear os valores lidos no intervalo de 0V até à tensão fornecida. Depois calcula-se a resistência do FSR usando a fórmula seguinte:

> ![resistência](https://latex.codecogs.com/png.latex?R_%7Bfsr%7D%3D%5Cfrac%7B%28Vcc-U%29R_1%7DU)

em que **R<sub>fsr</sub>** é a Resistência do sensor, **Vcc** é a tensão de alimentação (no caso do Arduino, 5V), **U** é a tensão medida e **R<sub>1</sub>** é a resistência do resistor pull-down.

Depois, calculamos a Condutância Elétrica, **G<sub>fsr</sub>**, que é o inverso da Resistência Elétrica:

> ![condutância](https://latex.codecogs.com/png.latex?G_%7Bfsr%7D%20%3D%20%5Cfrac%7B1%7DR_%7Bfsr%7D)


|            ![Gráfico](cond-force-res.png)             |
| :---------------------------------------------------: |
| *Fig. 4 - Gráfico: Condutância x Força x Resistência* |

## Circuito

### Esquemático

<p>
<img src="schematic.png" height="400px" width="300px">

<em><i>Fig. 5 - Esquemático</i></em>

</p>

### Arduino

<p>
<img src="https://www.makerguides.com/wp-content/uploads/2019/02/FSR-with-Arduino-wiring-diagram-1024x546.png" width="600px" height="300px">

<em><i>Fig. 6 - Circuito no Arduino</i></em>
</p>

## Referências
[1] Datasheet: https://cdn.sparkfun.com/assets/8/a/1/2/0/2010-10-26-DataSheet-FSR402-Layout2.pdf

[2] http://home.roboticlab.eu/pt/examples/sensor/force

[3] https://www.sparkfun.com/datasheets/Sensors/Pressure/fsrguide.pdf

[4] https://learn.adafruit.com/force-sensitive-resistor-fsr/using-an-fsr



