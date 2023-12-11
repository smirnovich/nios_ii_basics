# Основы разработки встраиваемых систем на ПЛИС с использованием процессора NIOS II
[Лаборатория Моделирования и Программирования](https://sf.itmo.ru/ru/page/19163/mod_and_prog.htm), [Университет ИТМО](itmo.ru)

<img src="https://itmo.ru/file/pages/213/logo_na_plashke_russkiy_belyy.png" alt="image" width="auto" height="100"><img src="https://sf.itmo.ru/images/877589826566fd59ca1fb8f369df2eaa.png" alt="image" width="auto" height="100">

Данный репозиторий используется в качестве сопровождающего материала к одноименному курсу и содержит материалы и исправления по [методическому пособию](https://books.ifmo.ru/file/pdf/2513.pdf) к данной дисциплине.

Учебное пособие описывает реализацию процессорных систем на базе Nios II с использованием отладочной платы [DE10-Standard](https://www.terasic.com.tw/cgi-bin/page/archive.pl?Language=English&CategoryNo=165&No=1081), однако, все реализации также могут быть легко адаптировны и к другим видам отладочных плат.

## Содержание

- [Исправления к методическому пособию](#исправления-к-методическому-пособию)
- Наиболее частые вопросы
- Файлы первого проекта
   - Аппаратная часть `nios_load1`
   - Программная часть
- Файлы второго проекта 
   - Аппаратная часть `nios_load2`
   - Программная часть
- Файлы третьего проекта 
   - Модификации аппаратной части `nios_load2`
   - Программная часть

### Исправления к методическому пособию

- стр.25: после генерации файлов `switch` нет, есть `nios_load1_switch`
- стр.75: для второго проекта **не** устанавливать счетчик в качестве системного, либо установить период 1 **мс**, а не **мкс**
- стр.83: ошибка в программе в последнем `if` не там скобка

### Сопутствующая полезная литература 

- Брайан Керниган, Деннис Ритчи. Язык программирования Си
- Pong Chu P. «Embedded SoPC Design with Nios II Processor and VHDL Examples», 2012
- David A. Patterson,John L. Hennessy Computer Organization and Design RISC-V Edition: The Hardware Software Interface
- Nios II Processor Reference Guide, (выбирать для используемой версии Quartus)
- Embedded Peripherals IP User Guide, (выбирать для используемой версии Quartus)
- А.О. Ключев, Д.Р. Ковязина, П.В. Кустарев, А.Е. Платунов Аппаратные и программные средства встраиваемых систем - Санкт-Петербург: , 2010
- А.Е. Платунов, Н.П. Постников ВЫСОКОУРОВНЕВОЕ ПРОЕКТИРОВАНИЕ ВСТРАИВАЕМЫХ СИСТЕМ - Санкт-Петербург: СПбГУ ИТМО, 2011