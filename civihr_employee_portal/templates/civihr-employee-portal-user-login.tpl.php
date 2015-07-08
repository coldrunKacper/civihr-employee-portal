<div class="row">
    <div id="ssp-login-page-header" class="col-md-6">
        Logo<br/>
        UK Youth<br/>
        Self Service Portal
    </div>
</div>

<?php
//$me = form_get_errors();
//var_dump($me);
?>

<div class="row">
    <div id="ssp-login-block" class="col-md-6">
        <div class="row">
            <div class="login-form col-md-10" style="background-color: #A5DC86;">
                <h2>Login</h2>

                <div id="messages">
                    <div class="alert alert-danger alert-dismissable">
                        <?php /*<button type="button" class="close" data-dismiss="alert" aria-hidden="true">×</button>*/ ?>
                        <ul>
                            <li>Some message</li>
                        </ul>
                    </div>
                </div>

                <?php print drupal_render($form['name']); ?>
                <?php print drupal_render($form['pass']); ?>
                <?php print drupal_render($form['form_build_id']); ?>
                <?php print drupal_render($form['form_id']); ?>
                <?php print drupal_render($form['actions']); ?>
                <a href="/user/password" title="Request new password via e-mail.">Forgot password?</a>
            </div>
        </div>
        <div class="row">
            <div class="forgot-password-form col-md-10" style="background-color: #aabbaa;">
                Enter your work email address in the box below and we'll resend you username and password.<br/>
                <input type="text" name="forgot-password" placeholder="Email" />
                <div class="form-actions form-wrapper" id="edit-actions">
                    <input name="op" value="Send me my details" class="form-submit btn btn-default btn-primary" type="button">
                </div>
            </div>
        </div>
        <?php print t('Don\'t have a login?'); ?><br/>
        <a href="/user/register" class="ctools-use-modal ctools-modal-civihr-default-style ctools-use-modal-processed" title="<?php print t('Request new account'); ?>"><?php print t('Click here to request one from your HR administrator'); ?></a>
    </div>
</div>

<?php
    //print 'render_children:';
    //print drupal_render_children($form);
    
    ////print 'variables:';print_r($variables);
?>
