phpcs:set Universal.WhiteSpace.PrecisionAlignment indent 4

<?php
/*
 * File with mostly tab based indentation.
 * Using an explicit custom indent value of 4 with tab-width 4.
 */
	function exampleFunctionA() {} // OK: [tab].

/*
 * OK: [tab][space][space][space][space]. This sniff is not concerned with tabs vs spaces.
 */
	    function exampleFunctionB() {}

/*
 * OK: [tab][space][space][tab][space][tab]. Comes down to three tabs. This sniff is not concerned with tabs vs spaces.
 */
	  	 	function exampleFunctionC() {}

	/**
	 * OK: Doc comment is indented with tabs and one space for the star alignment.
	 *
	  * @var string  <= Warning.
	 * @access private
	 */

	/*
		OK: Multi-line comment is indented with 2 tabs for the text alignment.
	 <= Warning, no star, but also not indented by multiples of 4 spaces.
	    OK: Another line of text [tab][space][space][space][space].
	 */

	/*
	 * OK: Multi-line comment is indented with tabs and one space for the star alignment.
	 *
	   * <= Warning.
	 */

	 function exampleFunctionD() {} // Warning: [tab][space].
	  function exampleFunctionE() {} // Warning: [tab][space][space].
	   function exampleFunctionF() {} // Warning: [tab][space][space][space].

	$object->functioncall()
		-> chained()
		-> anothermethod();

	$object->functioncall()
		   -> chained()        // Warning: [tab][tab][space][space][space].
		   -> anothermethod(); // Warning: [tab][tab][space][space][space].

   ?> <!-- Warning: three spaces. -->

	<p>
	  Warning: Some inline HTML with precision alignment.
	</p>

 <?php // Warning: one space.

// Testing empty line within a comment.
/*

*/

// Testing that incorrectly aligned docblocks and multi-line inline comments do not trigger errors.
// The incorrectly star alignment is not the concern of this sniff.
	/**
	* Provision some options
	*/

	/*
	* Provision some options
	*/

?>

<script type="text/javascript">
	/*
	 * Multi-line javascript comment should not trigger this sniff.
	 */
	alert('OK');
	  alert('bad'); <!-- Warning. -->
</script>

<?php

// phpcs:set Universal.WhiteSpace.PrecisionAlignment indent
