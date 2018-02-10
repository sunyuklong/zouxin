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
{dede:sppage sptype='full' sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://blog.sanjieke.cn/article/4334703{/dede:previewurl}
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
   {dede:match}<div class="article">[内容]</div>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
