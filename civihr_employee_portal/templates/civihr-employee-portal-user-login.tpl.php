<?php
drupal_session_start();
$customLoginSuccessMessage = _drupal_session_read('custom_login_success_message');
_drupal_session_write('custom_login_success_message', '');
?>
<div class="row">
    <div id="ssp-login-page-header" class="col-md-6">
        Logo<br/>
        UK Youth<br/>
        Self Service Portal
    </div>
</div>

<?php
$errors = form_get_errors();
//var_dump($errors);
?><br />
<?php /*
<?php print $messages; ?><br/>
Drupal messages: <?php var_dump(drupal_get_messages()); ?><br/>
Custom messages: <?php print $form['custom_messages']; ?><br/>
forgot-password: <?php var_dump($form['forgot-password']); ?>
<h4>form</h4>: <?php print_r($form); ?><br/>
<h4>form_state</h4>:<?php print_r($form_state); ?><br/>
<h4>variables</h4>: <?php print_r($variables); ?>
parameters: <?php print_r($parameters); ?>
<h4>session</h4>: <?php print_r($_SESSION); ?>
<h4>_session</h4>: <?php var_dump(_drupal_session_read('pompka')); ?> */?>

<div class="row">
    <div id="ssp-login-block" class="col-md-6">
        <div class="row">
            <div class="login-form col-md-10" style="background-color: #A5DC86;">
                <h2>Login</h2>
<?php if ($errors): ?>
                <div id="messages">
                    <div class="alert alert-danger alert-dismissable">
                        <?php /*<button type="button" class="close" data-dismiss="alert" aria-hidden="true">×</button>*/ ?>
                        <ul>
<?php foreach ($errors as $error): ?>
                            <li><?php print $error; ?></li>
<?php endforeach; ?>
                        </ul>
                    </div>
                </div>
<?php endif; ?>
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
                <?php print drupal_render($form['forgot-password']); ?>
<?php if ($customLoginSuccessMessage): ?>
                    <div class="alert alert-success alert-dismissable">
                        <ul>
                            <li><?php print $customLoginSuccessMessage; ?></li>
                        </ul>
                    </div>
<?php else: ?>
                <div class="form-actions form-wrapper" id="edit-actions">
                    <input name="op" value="Send me my details" class="form-submit btn btn-default btn-primary" type="button">
                </div>
<?php endif; ?>
            </div>
        </div>
        <?php print t('Don\'t have a login?'); ?><br/>
        <?php /*<a href="/user/register" class="ctools-use-modal ctools-modal-civihr-default-style ctools-use-modal-processed" title="<?php print t('Request new account'); ?>"><?php print t('Click here to request one from your HR administrator'); ?></a>*/ ?>
        <a href="/request_new_account/nojs" class="ctools-use-modal ctools-modal-civihr-default-style ctools-use-modal-processed" title="<?php print t('Request new account'); ?>"><?php print t('Click here to request one from your HR administrator'); ?></a>
    </div>
</div>

<?php
    //print 'render_children:';
    //print drupal_render_children($form);
    
    ////print 'variables:';print_r($variables);
?>
