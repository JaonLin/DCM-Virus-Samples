# **!!!!!!!! WARNINGS !!!!!!!!**

## **THIS REPOSITORY CONTAINS MALWARES!!!! DON'T DOWNLOAD OR RUN ANYTHING IN IT UNLESS YOU CLEARLY UNDERSTAND WHAT YOU ARE DOING!!!!**

# **！！！！ 警告 ！！！！**

## **該目錄下存有病毒程式！！！！ 請不要嘗試下載或運行裡面的任何程式，除非你非常清楚你在幹什麼！！！！**

# DCM Virus Samples

DCM is a Trojan Spy-ware dedicated to APT attack of specific targets.
It's first disclosed by Tecent's security team on Freebuf.<sup>[\[1\]][1]</sup>
It's developed by Chinese agency which rumored to be some g0v related
people. A self-claimed author member "DcmTeamMember" on V2EX posted
the insights about the creation of the virus.<sup>[\[2\]][2]</sup>

This repository contains some samples of the DCM virus collected from
various online virus sharing channels. The naming is the file's MD5
hash. If the original file is packed (usually with UPX) then an unpacked
version is provided for convinence.

#### `278ce79753aaa050fe750baba43490e5`

**Report:** http://r.virscan.org/report/fee007c110eeb4dfdba508120ab6bef4

This is the exact version used in the analysis article on Freebuf. So
I will personally reference it as `DCM-0`.

#### `89a5257fd9415b68ceab4a2122f70b45`

**Report:** https://totalhash.cymru.com/analysis/?823daa3fe3c32c32573b0317b488db901a191018

This version is basically the same as `DCM-0` with some minor changes.

#### `1b2f0cbd3f048ee9f3e9885d4076ce8c`

**Report:** https://home.mcafee.com/virusinfo/virusprofile.aspx?key=2236045

I believe it's an early version DCM virus due to the small file size,
and lack of most of the behaviour characteristics of `DCM-0`. However,
it does generate `%TEMP%\{E53B9A13-F4C6-4d78-9755-65C029E88F02}\soft.prog`
and other core files that we can be certain that it's a variation of DCM.

[1]: http://www.freebuf.com/articles/system/101447.html
[2]: https://www.v2ex.com/t/271590
