#XLMTimestamping
XLMTimestamp create tstamp -base [expr  9 << 27]
XLMTimestamp config tstamp -firmware /user/s800/server/fpga/stamp64.bit
set adcChannels(tstamp) "tstamp.0"

hinp create hira 0x28000000
hinp config hira -readsramb on 
#hinp config hira -havefadc false

#CsI ADCs
adc create adc1 0x66660000
adc config adc1 -geo 11 -supressrange off -ipl 0 -vector 0
#adc config adc1 -smallthresholds on

puts [adc cget adc1]

adc create adc2 0xDDDD0000
adc config adc2 -geo 12 -supressrange off -ipl 0 -vector 0

puts [adc cget adc2]

#TDC
tdc1x90 create tdc1 -base 0xEEEE0000
tdc1x90 config tdc1 -vsn 18 -window 40 -offset -24 -tagtime on -vector 0 -depth 1
tdc1x90 config tdc1 -termination on -refchannel 52
tdc1x90 config tdc1 -encapsulatechip false

#MCP QDCs
adc create qdc1 0x33330000
adc config qdc1 -geo 0 -supressrange false -ipl 0 -vector 0 -iped 180
puts [adc cget qdc1]
adc create qdc2 0x22220000
adc config qdc2 -geo 0 -supressrange false -ipl 0 -vector 0 -iped 180
puts [adc cget qdc2]

stack create events
stack config events -trigger nim1 
stack config events -modules [list tstamp hira adc1 adc2 tdc1 qdc1 qdc2]

set HINPChips(hira) [list 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20]
set adcChannels(hira) "hira"
set HINPMBs(hira) [list mb1 mb2]

set adcChannels(adc1) [list adc1.00 adc1.01 adc1.02 adc1.03 adc1.04 adc1.05 adc1.06 adc1.07 \
                            adc1.08 adc1.09 adc1.10 adc1.11 adc1.12 adc1.13 adc1.14 adc1.15 \
                            adc1.16 adc1.17 adc1.18 adc1.19 adc1.20 adc1.21 adc1.22 adc1.23 \
                            adc1.24 adc1.25 adc1.26 adc1.27 adc1.28 adc1.29 adc1.30 adc1.31]
set adcChannels(adc2) [list adc2.00 adc2.01 adc2.02 adc2.03 adc2.04 adc2.05 adc2.06 adc2.07 \
                            adc2.08 adc2.09 adc2.10 adc2.11 adc2.12 adc2.13 adc2.14 adc2.15 \
                            adc2.16 adc2.17 adc2.18 adc2.19 adc2.20 adc2.21 adc2.22 adc2.23 \
                            adc2.24 adc2.25 adc2.26 adc2.27 adc2.28 adc2.29 adc2.30 adc2.31]
set adcChannels(tdc1) [list tdc1.00 tdc1.01 tdc1.02 tdc1.03 tdc1.04 tdc1.05 tdc1.06 tdc1.07 \
                            tdc1.08 tdc1.09 tdc1.10 tdc1.11 tdc1.12 tdc1.13 tdc1.14 tdc1.15 \
                            tdc1.16 tdc1.17 tdc1.18 tdc1.19 tdc1.20 tdc1.21 tdc1.22 tdc1.23 \
                            tdc1.24 tdc1.25 tdc1.26 tdc1.27 tdc1.28 tdc1.29 tdc1.30 tdc1.31 \
                            tdc1.32 tdc1.33 tdc1.34 tdc1.35 tdc1.36 tdc1.37 tdc1.38 tdc1.39 \
                            tdc1.40 tdc1.41 tdc1.42 tdc1.43 tdc1.44 tdc1.45 tdc1.46 tdc1.47 \
                            tdc1.48 tdc1.49 tdc1.50 tdc1.51 tdc1.52 tdc1.53 tdc1.54 tdc1.55 \
                            tdc1.56 tdc1.57 tdc1.58 tdc1.59 tdc1.60 tdc1.61 tdc1.62 tdc1.63]
set adcChannels(qdc1) [list qdc0.00 qdc0.01 qdc0.02 qdc0.03 qdc0.04 qdc0.05 qdc0.06 qdc0.07 \
                            qdc0.08 qdc0.09 qdc0.10 qdc0.11 qdc0.12 qdc0.13 qdc0.14 qdc0.15 \
                            qdc0.16 qdc0.17 qdc0.18 qdc0.19 qdc0.20 qdc0.21 qdc0.22 qdc0.23 \
                            qdc0.24 qdc0.25 qdc0.26 qdc0.27 qdc0.28 qdc0.29 qdc0.30 qdc0.31]
set adcChannels(qdc2) [list qdc1.00 qdc1.01 qdc1.02 qdc1.03 qdc1.04 qdc1.05 qdc1.06 qdc1.07 \
                            qdc1.08 qdc1.09 qdc1.10 qdc1.11 qdc1.12 qdc1.13 qdc1.14 qdc1.15 \
                            qdc1.16 qdc1.17 qdc1.18 qdc1.19 qdc1.20 qdc1.21 qdc1.22 qdc1.23 \
                            qdc1.24 qdc1.25 qdc1.26 qdc1.27 qdc1.28 qdc1.29 qdc1.30 qdc1.31]



