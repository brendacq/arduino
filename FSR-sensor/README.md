# Force Sensing Resistor  - FSR402

![FSR402](https://sc01.alicdn.com/kf/HTB1OCy3RpXXXXX7XFXXq6xXFXXXb.jpg_350x350.jpg)

Basicamente, os FSR são dispositivos que produzem uma queda na resistência elétrica conforme mais força física (ou pressão) é aplicada sobre ele. A quantidade de eletricidade que é possível fluir no circuito depende da pressão exercida no sensor, já que, quanto maior a pressão, mais material condutivo entrará em contato com os fios e aumentar a saída elétrica de forma previsível - o que permite detectar mudanças na Força também.

## Informações Técnicas

* **Referência:** FSR 402
* **Diâmetro:** Ø18,28mm *(parte ativa: Ø12,7mm)*
* **Sensibiliade:** 0.1N a 10.0²N

![Mechanical Data](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQcmUB4F21NUd-uNBaRx7f7j2NiITUlnPTgyZD--J6Q7uS4tnlN8xErVE07WKdFnc-f_P3Urr0hpJMZt5AymeErtTilnUJHjjo&usqp=CAU&ec=45732301)

## Aplicação

Para medir a força de Newton através de um FSR é boa idéia mapear os valores lidos no intervalo de 0V até à tensão fornecida. Depois calcula-se a resistência do FSR usando a fórmula seguinte:

$$
R_{fsr} = \frac{(Vcc - U) * R_1}U ,
$$

em que R<sub>fsr</sub> é a Resistência do sensor, Vcc é a tensão de alimentação (no caso do Arduino, 5V), U é a tensão medida e R<sub>1</sub> é a resistência do resistor pull-down.

Depois, calculamos a Condutância Elétrica, G<sub>fsr</sub> (Siemens/m), que é o inverso da Resistência Elétrica:

$$
  G_{fsr} = \frac{1}R_{fsr}
$$

## Referências
* Datasheet: https://cdn.sparkfun.com/assets/8/a/1/2/0/2010-10-26-DataSheet-FSR402-Layout2.pdf
* http://home.roboticlab.eu/pt/examples/sensor/force


http://home.roboticlab.eu/_media/en/examples/sensor/force_conductance_graph.png?w=250&tok=60996e gráfico



