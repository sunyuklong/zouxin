{dede:noteinfo notename="新闻" channelid="1" macthtype="string"
refurl="http://tech.ifeng.com/a/20180130/44863373_0.shtml" sourcelang="gb2312" cosort="asc" isref="no" exptime="10" usemore="0" /}

{dede:listrule sourcetype="rss" rssurl="http://tech.ifeng.com/" regxurl="http://tech.ifeng.com/a/20180130/44863373_0.shtml"
startid="1" endid="5" addv="1" urlrule="area"
 musthas="" nothas="" listpic="1" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}{/dede:areastart}
    {dede:areaend}{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='full' sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[内容]</title>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}@me=GetMkTime(@me);{/dede:function}
{/dede:item}
{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
