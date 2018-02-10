{dede:noteinfo notename="文章" channelid="1" macthtype="string"
refurl="http://blog.sanjieke.cn/index.html" sourcelang="gb2312" cosort="asc" isref="no" exptime="10" usemore="0" /}

{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://blog.sanjieke.cn/article/(*)"
startid="1" endid="5" addv="1" urlrule="area"
 musthas="/article/" nothas="" listpic="1" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div class="wrap">{/dede:areastart}
    {dede:areaend}<div id="rotate"></div>{/dede:areaend}
{/dede:listrule}
